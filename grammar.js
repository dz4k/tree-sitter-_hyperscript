
const commandList = $ => repeat(seq(
  $._command,
  optional('then'),
))

const sep1 = (rule, separator) => seq(
  rule,
  repeat(seq(separator, rule))
)

const sep = (rule, separator) => optional(sep1(rule, separator))

const re = strings => new RegExp(
  strings.raw[0].split('\n').map(str => str.trim()).join(''),
)

module.exports = grammar({
  name: 'YOUR_LANGUAGE_NAME',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat(seq($._feature, optional('end'))),

    _feature: $ => choice(
      $.defFeature,
      $.onFeature,
      $.behaviorFeature,
    ),

    _command: $ => choice(
      $.logCommand,
    ),

    _expression: $ => choice(
      $.number,
      $.symbol,
    ),

    featureBoundary: $ => 'end',


    // FEATURES

    defFeature: $ => seq(
      "def",
      field('name', $.IDENTIFIER),
      field('params', optional($.argumentList)),
      commandList($),
    ),

    onFeature: $ => seq(
      'on',
      field('every', optional('every')),
      sep(
        seq($.eventSpec),
        'or'
      ),
      optional(seq(
        'queue',
        field('queue', choice('all', 'first', 'none', 'last')),
      )),
      commandList($),
    ),

    behaviorFeature: $ => seq(
      'behavior',
      field('name', $._dotOrColonPath),
      field('params', $.parameterList),
      repeat(seq(
        $._feature,
        'end',
      )),
      'end',
    ),


    // COMMANDS

    logCommand: $ => seq(
      'log',
      $._expression,
    ),


    // EXPRESSIONS

    number: $ => $.NUMBER,

    symbol: $ => seq(
      field('scope', optional(choice(
        'local',
        'element',
        'global',
        'module',
      ))),
      field('name', $.IDENTIFIER),
    ),


    // OTHER ELEMENTS

    argumentList: $ => seq(
      '(',
      sep($._expression, ','),
      ')',
    ),

    parameterList: $ => seq(
      '(',
      sep($.IDENTIFIER, ','),
      ')',
    ),


    eventSpec: $ => seq(
      field('eventName', $.eventName),
      optional(field('params', $.parameterList)),
      optional(seq(
        '[',
        field('filter', $._expression),
        ']',
      )),
      optional(seq(
        field('startCount', $.number),
        optional(choice(
          seq(
            'to',
            field('endCount', $.number),
          ),
          field('countUnbounded', seq('and', 'on')),
        )),
      )),
      // TODO: handle intersection and mutation pseudoevents' special syntax
      optional(choice(
        seq(field('from', 'elsewhere')),
        seq('from', field('from', 'elsewhere')),
        seq(
          'from',
          field('from', $._expression),
        ),
      )),
      optional(seq(
        'in',
        field('in', $._expression), // TODO restrict this to css selector refs
      )),
      optional(choice(
        seq(
          'debounced',
          'at',
          field('debounce', $.timeExpression),
        ),
        seq(
          'throttled',
          'at',
          field('throttle', $.timeExpression),
        ),
      )),
    ),

    eventName: $ => choice(
      $.STRING,
      $._dotOrColonPath,
    ),

    _dotOrColonPath: $ => re`
      [a-zA-Z\$_][a-zA-Z0-9\$_]*
      (
        (:[a-zA-Z\$_][a-zA-Z0-9\$_]*)*
        |
        (\.[a-zA-Z\$_][a-zA-Z0-9\$_]*)*
      )
    `,

    timeExpression: $ => seq(
      $._expression,
      choice('s', 'ms', 'seconds', 'milliseconds'),
    ),


    // TERMINALS

    IDENTIFIER: $ => /[a-zA-Z\$_][a-zA-Z0-9\$_]*/,
    NUMBER: $ => /\d+/,
    STRING: $ => /"[^\n"]*"|'[^\n']*'/,
  },

  extras: $ => [
    /\s/,
    /--(.*)\n/,
  ],
});
