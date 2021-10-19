
const commandList = $ => repeat(seq(
  $._command,
  optional('then'),
))

module.exports = grammar({
  name: 'YOUR_LANGUAGE_NAME',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat(seq($._feature, optional('end'))),

    _feature: $ => choice(
      $.defFeature,
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
      field('args', optional($.argumentList)),
      commandList($),
    ),

    onFeature: $ => seq(
      'on',
      // TODO: on feature (look at parsing code)
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
      /* TODO: Parse parameter list */
      ')'
    ),


    // TERMINALS

    IDENTIFIER: $ => /[a-zA-Z\$_][a-zA-Z0-9\$_]*/,
    NUMBER: $ => /\d+/,
  },

  extras: $ => [
    /\s/,
    /--(.*)\n/,
  ],
});
