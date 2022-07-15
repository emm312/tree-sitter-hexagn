#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 2
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

enum {
  sym_func_name = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_EQ = 5,
  anon_sym_SEMI = 6,
  anon_sym_int8 = 7,
  anon_sym_int16 = 8,
  anon_sym_int32 = 9,
  anon_sym_int64 = 10,
  anon_sym_string = 11,
  anon_sym_char = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_return = 15,
  anon_sym_while = 16,
  anon_sym_if = 17,
  anon_sym_else = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_STAR = 21,
  anon_sym_SLASH = 22,
  anon_sym_CARET = 23,
  anon_sym_EQ_EQ = 24,
  anon_sym_BANG_EQ = 25,
  anon_sym_LT = 26,
  anon_sym_GT = 27,
  anon_sym_LT_EQ = 28,
  anon_sym_GT_EQ = 29,
  sym_identifier = 30,
  sym_number = 31,
  sym_source_file = 32,
  sym__definition = 33,
  sym_function_definition = 34,
  sym_parameter_list = 35,
  sym_variable_definition = 36,
  sym_type = 37,
  sym_block = 38,
  sym__any = 39,
  sym__statement = 40,
  sym_return_statement = 41,
  sym_while_loop = 42,
  sym_if_statement = 43,
  aux_sym__expression = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_parameter_list_repeat1 = 46,
  aux_sym_block_repeat1 = 47,
  alias_sym_keyword = 48,
  alias_sym_parens = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_func_name] = "func_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_string] = "string",
  [anon_sym_char] = "char",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_while] = "while",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_CARET] = "equals",
  [anon_sym_EQ_EQ] = "equals",
  [anon_sym_BANG_EQ] = "equals",
  [anon_sym_LT] = "equals",
  [anon_sym_GT] = "equals",
  [anon_sym_LT_EQ] = "equals",
  [anon_sym_GT_EQ] = "equals",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_variable_definition] = "variable_definition",
  [sym_type] = "type",
  [sym_block] = "block",
  [sym__any] = "_any",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym_while_loop] = "while_loop",
  [sym_if_statement] = "if_statement",
  [aux_sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [alias_sym_keyword] = "keyword",
  [alias_sym_parens] = "parens",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_func_name] = sym_func_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_CARET,
  [anon_sym_BANG_EQ] = anon_sym_CARET,
  [anon_sym_LT] = anon_sym_CARET,
  [anon_sym_GT] = anon_sym_CARET,
  [anon_sym_LT_EQ] = anon_sym_CARET,
  [anon_sym_GT_EQ] = anon_sym_CARET,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_variable_definition] = sym_variable_definition,
  [sym_type] = sym_type,
  [sym_block] = sym_block,
  [sym__any] = sym__any,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym_while_loop] = sym_while_loop,
  [sym_if_statement] = sym_if_statement,
  [aux_sym__expression] = aux_sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [alias_sym_keyword] = alias_sym_keyword,
  [alias_sym_parens] = alias_sym_parens,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_func_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__any] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__expression] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_parens] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_parens,
    [1] = alias_sym_parens,
  },
  [2] = {
    [2] = anon_sym_CARET,
  },
  [3] = {
    [0] = alias_sym_parens,
    [2] = alias_sym_parens,
  },
  [4] = {
    [1] = anon_sym_CARET,
  },
  [5] = {
    [0] = alias_sym_keyword,
  },
  [6] = {
    [0] = alias_sym_keyword,
    [1] = alias_sym_parens,
    [3] = alias_sym_parens,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '^') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(16);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '^') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(5);
      if (lookahead == '8') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == '4') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '6') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_func_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_func_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(62),
    [sym__definition] = STATE(7),
    [sym_function_definition] = STATE(7),
    [sym_variable_definition] = STATE(7),
    [sym_type] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_int8] = ACTIONS(5),
    [anon_sym_int16] = ACTIONS(5),
    [anon_sym_int32] = ACTIONS(5),
    [anon_sym_int64] = ACTIONS(5),
    [anon_sym_string] = ACTIONS(5),
    [anon_sym_char] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_if,
    STATE(63), 1,
      sym_type,
    ACTIONS(7), 6,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
    STATE(3), 7,
      sym_variable_definition,
      sym__any,
      sym__statement,
      sym_return_statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
  [33] = 7,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    ACTIONS(22), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_while,
    ACTIONS(28), 1,
      anon_sym_if,
    STATE(63), 1,
      sym_type,
    ACTIONS(17), 6,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
    STATE(3), 7,
      sym_variable_definition,
      sym__any,
      sym__statement,
      sym_return_statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
  [66] = 7,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_type,
    ACTIONS(7), 6,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
    STATE(3), 7,
      sym_variable_definition,
      sym__any,
      sym__statement,
      sym_return_statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
  [99] = 7,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_type,
    ACTIONS(7), 6,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
    STATE(4), 7,
      sym_variable_definition,
      sym__any,
      sym__statement,
      sym_return_statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
  [132] = 7,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_type,
    ACTIONS(7), 6,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
    STATE(2), 7,
      sym_variable_definition,
      sym__any,
      sym__statement,
      sym_return_statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
  [165] = 4,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      sym_type,
    STATE(8), 4,
      sym__definition,
      sym_function_definition,
      sym_variable_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 6,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [186] = 4,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      sym_type,
    STATE(8), 4,
      sym__definition,
      sym_function_definition,
      sym_variable_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(41), 6,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [207] = 2,
    ACTIONS(46), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(44), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [223] = 1,
    ACTIONS(48), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
  [237] = 2,
    ACTIONS(52), 1,
      anon_sym_else,
    ACTIONS(50), 10,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
  [253] = 1,
    ACTIONS(54), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
  [267] = 2,
    ACTIONS(58), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(56), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [283] = 1,
    ACTIONS(60), 10,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
  [296] = 1,
    ACTIONS(62), 10,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
  [309] = 1,
    ACTIONS(64), 10,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
  [322] = 1,
    ACTIONS(66), 10,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
  [335] = 1,
    ACTIONS(68), 10,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
  [348] = 1,
    ACTIONS(70), 10,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
  [361] = 1,
    ACTIONS(72), 10,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
  [374] = 4,
    STATE(21), 1,
      aux_sym__expression,
    ACTIONS(74), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(79), 2,
      sym_identifier,
      sym_number,
    ACTIONS(76), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [392] = 4,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_parameter_list_repeat1,
    STATE(67), 1,
      sym_type,
    ACTIONS(7), 6,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [410] = 4,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_parameter_list_repeat1,
    STATE(67), 1,
      sym_type,
    ACTIONS(86), 6,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [428] = 5,
    ACTIONS(89), 1,
      anon_sym_EQ,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      aux_sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [448] = 5,
    ACTIONS(97), 1,
      anon_sym_EQ,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      aux_sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [468] = 4,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_parameter_list_repeat1,
    STATE(67), 1,
      sym_type,
    ACTIONS(7), 6,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [486] = 4,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      aux_sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [503] = 4,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      aux_sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [520] = 4,
    ACTIONS(107), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      aux_sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [537] = 4,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      aux_sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [554] = 4,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      aux_sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [571] = 2,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(84), 7,
      anon_sym_RPAREN,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [584] = 4,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [601] = 4,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [618] = 4,
    ACTIONS(119), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      aux_sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [635] = 4,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      aux_sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [652] = 1,
    ACTIONS(123), 8,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_identifier,
      sym_number,
  [663] = 1,
    ACTIONS(125), 8,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_identifier,
      sym_number,
  [674] = 1,
    ACTIONS(68), 7,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [684] = 1,
    ACTIONS(127), 7,
      anon_sym_RPAREN,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [694] = 3,
    STATE(34), 1,
      aux_sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [708] = 3,
    STATE(33), 1,
      aux_sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [722] = 1,
    ACTIONS(54), 7,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [732] = 1,
    ACTIONS(72), 7,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [742] = 1,
    ACTIONS(66), 7,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [752] = 3,
    STATE(31), 1,
      aux_sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [766] = 1,
    ACTIONS(48), 7,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [776] = 1,
    ACTIONS(62), 7,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [786] = 1,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [796] = 1,
    ACTIONS(131), 2,
      sym_identifier,
      sym_number,
  [801] = 2,
    ACTIONS(133), 1,
      sym_func_name,
    ACTIONS(135), 1,
      sym_identifier,
  [808] = 2,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_block,
  [815] = 2,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_block,
  [822] = 2,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_parameter_list,
  [829] = 2,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
  [836] = 2,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
  [843] = 1,
    ACTIONS(143), 2,
      sym_identifier,
      sym_number,
  [848] = 2,
    ACTIONS(145), 1,
      sym_func_name,
    ACTIONS(147), 1,
      sym_identifier,
  [855] = 1,
    ACTIONS(149), 2,
      sym_identifier,
      sym_number,
  [860] = 1,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
  [864] = 1,
    ACTIONS(133), 1,
      sym_identifier,
  [868] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [872] = 1,
    ACTIONS(155), 1,
      sym_identifier,
  [876] = 1,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
  [880] = 1,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
  [884] = 1,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
  [888] = 1,
    ACTIONS(163), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 207,
  [SMALL_STATE(10)] = 223,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 253,
  [SMALL_STATE(13)] = 267,
  [SMALL_STATE(14)] = 283,
  [SMALL_STATE(15)] = 296,
  [SMALL_STATE(16)] = 309,
  [SMALL_STATE(17)] = 322,
  [SMALL_STATE(18)] = 335,
  [SMALL_STATE(19)] = 348,
  [SMALL_STATE(20)] = 361,
  [SMALL_STATE(21)] = 374,
  [SMALL_STATE(22)] = 392,
  [SMALL_STATE(23)] = 410,
  [SMALL_STATE(24)] = 428,
  [SMALL_STATE(25)] = 448,
  [SMALL_STATE(26)] = 468,
  [SMALL_STATE(27)] = 486,
  [SMALL_STATE(28)] = 503,
  [SMALL_STATE(29)] = 520,
  [SMALL_STATE(30)] = 537,
  [SMALL_STATE(31)] = 554,
  [SMALL_STATE(32)] = 571,
  [SMALL_STATE(33)] = 584,
  [SMALL_STATE(34)] = 601,
  [SMALL_STATE(35)] = 618,
  [SMALL_STATE(36)] = 635,
  [SMALL_STATE(37)] = 652,
  [SMALL_STATE(38)] = 663,
  [SMALL_STATE(39)] = 674,
  [SMALL_STATE(40)] = 684,
  [SMALL_STATE(41)] = 694,
  [SMALL_STATE(42)] = 708,
  [SMALL_STATE(43)] = 722,
  [SMALL_STATE(44)] = 732,
  [SMALL_STATE(45)] = 742,
  [SMALL_STATE(46)] = 752,
  [SMALL_STATE(47)] = 766,
  [SMALL_STATE(48)] = 776,
  [SMALL_STATE(49)] = 786,
  [SMALL_STATE(50)] = 796,
  [SMALL_STATE(51)] = 801,
  [SMALL_STATE(52)] = 808,
  [SMALL_STATE(53)] = 815,
  [SMALL_STATE(54)] = 822,
  [SMALL_STATE(55)] = 829,
  [SMALL_STATE(56)] = 836,
  [SMALL_STATE(57)] = 843,
  [SMALL_STATE(58)] = 848,
  [SMALL_STATE(59)] = 855,
  [SMALL_STATE(60)] = 860,
  [SMALL_STATE(61)] = 864,
  [SMALL_STATE(62)] = 868,
  [SMALL_STATE(63)] = 872,
  [SMALL_STATE(64)] = 876,
  [SMALL_STATE(65)] = 880,
  [SMALL_STATE(66)] = 884,
  [SMALL_STATE(67)] = 888,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(46),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 6),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_loop, 5, .production_id = 5),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, .production_id = 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression, 2), SHIFT_REPEAT(59),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression, 2), SHIFT_REPEAT(9),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(61),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression, 4, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression, 3, .production_id = 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, .production_id = 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hexagn(void) {
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
