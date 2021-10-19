#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_end = 1,
  anon_sym_def = 2,
  anon_sym_then = 3,
  anon_sym_log = 4,
  anon_sym_local = 5,
  anon_sym_element = 6,
  anon_sym_global = 7,
  anon_sym_module = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  sym_IDENTIFIER = 11,
  sym_NUMBER = 12,
  sym_source_file = 13,
  sym__feature = 14,
  sym__command = 15,
  sym__expression = 16,
  sym_defFeature = 17,
  sym_logCommand = 18,
  sym_number = 19,
  sym_symbol = 20,
  sym_argumentList = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_defFeature_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_end] = "end",
  [anon_sym_def] = "def",
  [anon_sym_then] = "then",
  [anon_sym_log] = "log",
  [anon_sym_local] = "local",
  [anon_sym_element] = "element",
  [anon_sym_global] = "global",
  [anon_sym_module] = "module",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_IDENTIFIER] = "IDENTIFIER",
  [sym_NUMBER] = "NUMBER",
  [sym_source_file] = "source_file",
  [sym__feature] = "_feature",
  [sym__command] = "_command",
  [sym__expression] = "_expression",
  [sym_defFeature] = "defFeature",
  [sym_logCommand] = "logCommand",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [sym_argumentList] = "argumentList",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_defFeature_repeat1] = "defFeature_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_log] = anon_sym_log,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_element] = anon_sym_element,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_IDENTIFIER] = sym_IDENTIFIER,
  [sym_NUMBER] = sym_NUMBER,
  [sym_source_file] = sym_source_file,
  [sym__feature] = sym__feature,
  [sym__command] = sym__command,
  [sym__expression] = sym__expression,
  [sym_defFeature] = sym_defFeature,
  [sym_logCommand] = sym_logCommand,
  [sym_number] = sym_number,
  [sym_symbol] = sym_symbol,
  [sym_argumentList] = sym_argumentList,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_defFeature_repeat1] = aux_sym_defFeature_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_element] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_IDENTIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_NUMBER] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__feature] = {
    .visible = false,
    .named = true,
  },
  [sym__command] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_defFeature] = {
    .visible = true,
    .named = true,
  },
  [sym_logCommand] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_argumentList] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defFeature_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_name = 2,
  field_scope = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_name] = "name",
  [field_scope] = "scope",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_args, 2},
    {field_name, 1},
  [3] =
    {field_name, 0},
  [4] =
    {field_name, 1},
    {field_scope, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '-') SKIP(34)
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead != 0) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(6)
      if (lookahead != 0) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '-') SKIP(4)
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'g') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == '-') SKIP(1)
      END_STATE();
    case 5:
      if (lookahead == '-') SKIP(2)
      END_STATE();
    case 6:
      if (lookahead == '-') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      if (lookahead == '\n') SKIP(0)
      if (lookahead != 0) SKIP(33)
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '-') SKIP(33)
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_element);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_element);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_log] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_element] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_NUMBER] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym__feature] = STATE(17),
    [sym_defFeature] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_def] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      sym_IDENTIFIER,
    ACTIONS(11), 1,
      sym_NUMBER,
    STATE(13), 3,
      sym__expression,
      sym_number,
      sym_symbol,
    ACTIONS(7), 4,
      anon_sym_local,
      anon_sym_element,
      anon_sym_global,
      anon_sym_module,
  [18] = 6,
    ACTIONS(15), 1,
      anon_sym_log,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      aux_sym_defFeature_repeat1,
    STATE(7), 1,
      sym_argumentList,
    STATE(10), 2,
      sym__command,
      sym_logCommand,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      anon_sym_end,
      anon_sym_def,
  [40] = 4,
    ACTIONS(21), 1,
      anon_sym_log,
    STATE(4), 1,
      aux_sym_defFeature_repeat1,
    STATE(10), 2,
      sym__command,
      sym_logCommand,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_end,
      anon_sym_def,
  [56] = 4,
    ACTIONS(15), 1,
      anon_sym_log,
    STATE(4), 1,
      aux_sym_defFeature_repeat1,
    STATE(10), 2,
      sym__command,
      sym_logCommand,
    ACTIONS(24), 3,
      ts_builtin_sym_end,
      anon_sym_end,
      anon_sym_def,
  [72] = 4,
    ACTIONS(15), 1,
      anon_sym_log,
    STATE(4), 1,
      aux_sym_defFeature_repeat1,
    STATE(10), 2,
      sym__command,
      sym_logCommand,
    ACTIONS(26), 3,
      ts_builtin_sym_end,
      anon_sym_end,
      anon_sym_def,
  [88] = 4,
    ACTIONS(15), 1,
      anon_sym_log,
    STATE(5), 1,
      aux_sym_defFeature_repeat1,
    STATE(10), 2,
      sym__command,
      sym_logCommand,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      anon_sym_end,
      anon_sym_def,
  [104] = 1,
    ACTIONS(30), 5,
      ts_builtin_sym_end,
      anon_sym_end,
      anon_sym_def,
      anon_sym_then,
      anon_sym_log,
  [112] = 4,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_def,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym__feature,
      sym_defFeature,
  [126] = 2,
    ACTIONS(39), 1,
      anon_sym_then,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_end,
      anon_sym_def,
      anon_sym_log,
  [136] = 4,
    ACTIONS(5), 1,
      anon_sym_def,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym__feature,
      sym_defFeature,
  [150] = 1,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_end,
      anon_sym_def,
      anon_sym_then,
      anon_sym_log,
  [158] = 1,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      anon_sym_end,
      anon_sym_def,
      anon_sym_then,
      anon_sym_log,
  [166] = 1,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_end,
      anon_sym_def,
      anon_sym_then,
      anon_sym_log,
  [174] = 1,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_end,
      anon_sym_def,
      anon_sym_log,
  [181] = 1,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_end,
      anon_sym_def,
      anon_sym_log,
  [188] = 2,
    ACTIONS(53), 1,
      anon_sym_end,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [196] = 1,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [201] = 1,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
  [205] = 1,
    ACTIONS(57), 1,
      sym_IDENTIFIER,
  [209] = 1,
    ACTIONS(59), 1,
      sym_IDENTIFIER,
  [213] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 104,
  [SMALL_STATE(9)] = 112,
  [SMALL_STATE(10)] = 126,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 150,
  [SMALL_STATE(13)] = 158,
  [SMALL_STATE(14)] = 166,
  [SMALL_STATE(15)] = 174,
  [SMALL_STATE(16)] = 181,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 196,
  [SMALL_STATE(19)] = 201,
  [SMALL_STATE(20)] = 205,
  [SMALL_STATE(21)] = 209,
  [SMALL_STATE(22)] = 213,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defFeature, 2, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defFeature_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defFeature_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defFeature, 4, .production_id = 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defFeature, 3, .production_id = 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defFeature, 3, .production_id = 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, .production_id = 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defFeature_repeat1, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logCommand, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2, .production_id = 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argumentList, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_YOUR_LANGUAGE_NAME(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
