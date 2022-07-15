#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 80
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
    [1] = anon_sym_CARET,
  },
  [2] = {
    [0] = alias_sym_parens,
    [1] = alias_sym_parens,
  },
  [3] = {
    [2] = anon_sym_CARET,
  },
  [4] = {
    [0] = alias_sym_parens,
    [2] = alias_sym_parens,
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
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '^') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 'w') ADVANCE(64);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(5);
      if (lookahead == '8') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '4') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == '6') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 'w') ADVANCE(64);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(24);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '^') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_func_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_func_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_string);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_char);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_return);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_while);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_if);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_else);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(5);
      if (lookahead == '8') ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(72);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(73);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
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
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym__definition] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_variable_definition] = STATE(9),
    [sym_type] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_int8] = ACTIONS(5),
    [anon_sym_int16] = ACTIONS(5),
    [anon_sym_int32] = ACTIONS(5),
    [anon_sym_int64] = ACTIONS(5),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_char] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(74), 1,
      sym_type,
    ACTIONS(13), 2,
      anon_sym_string,
      anon_sym_char,
    ACTIONS(11), 4,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
    STATE(7), 7,
      sym_variable_definition,
      sym__any,
      sym__statement,
      sym_return_statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
  [38] = 9,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_type,
    ACTIONS(13), 2,
      anon_sym_string,
      anon_sym_char,
    ACTIONS(11), 4,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
    STATE(2), 7,
      sym_variable_definition,
      sym__any,
      sym__statement,
      sym_return_statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
  [76] = 9,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_type,
    ACTIONS(13), 2,
      anon_sym_string,
      anon_sym_char,
    ACTIONS(11), 4,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
    STATE(7), 7,
      sym_variable_definition,
      sym__any,
      sym__statement,
      sym_return_statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
  [114] = 9,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_type,
    ACTIONS(13), 2,
      anon_sym_string,
      anon_sym_char,
    ACTIONS(11), 4,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
    STATE(4), 7,
      sym_variable_definition,
      sym__any,
      sym__statement,
      sym_return_statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
  [152] = 9,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_type,
    ACTIONS(13), 2,
      anon_sym_string,
      anon_sym_char,
    ACTIONS(11), 4,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
    STATE(7), 7,
      sym_variable_definition,
      sym__any,
      sym__statement,
      sym_return_statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
  [190] = 9,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_while,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(74), 1,
      sym_type,
    ACTIONS(36), 2,
      anon_sym_string,
      anon_sym_char,
    ACTIONS(33), 4,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
    STATE(7), 7,
      sym_variable_definition,
      sym__any,
      sym__statement,
      sym_return_statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
  [228] = 9,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_type,
    ACTIONS(13), 2,
      anon_sym_string,
      anon_sym_char,
    ACTIONS(11), 4,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
    STATE(6), 7,
      sym_variable_definition,
      sym__any,
      sym__statement,
      sym_return_statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
  [266] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(68), 1,
      sym_type,
    ACTIONS(7), 2,
      anon_sym_string,
      anon_sym_char,
    ACTIONS(5), 4,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
    STATE(10), 4,
      sym__definition,
      sym_function_definition,
      sym_variable_definition,
      aux_sym_source_file_repeat1,
  [292] = 6,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(68), 1,
      sym_type,
    ACTIONS(62), 2,
      anon_sym_string,
      anon_sym_char,
    ACTIONS(59), 4,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
    STATE(10), 4,
      sym__definition,
      sym_function_definition,
      sym_variable_definition,
      aux_sym_source_file_repeat1,
  [318] = 2,
    ACTIONS(68), 5,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_RBRACE,
    ACTIONS(70), 7,
      anon_sym_string,
      anon_sym_char,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
  [335] = 2,
    ACTIONS(72), 5,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_RBRACE,
    ACTIONS(74), 7,
      anon_sym_string,
      anon_sym_char,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
  [352] = 3,
    ACTIONS(80), 1,
      anon_sym_else,
    ACTIONS(76), 5,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_RBRACE,
    ACTIONS(78), 6,
      anon_sym_string,
      anon_sym_char,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [371] = 2,
    ACTIONS(72), 5,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_RBRACE,
    ACTIONS(74), 6,
      anon_sym_string,
      anon_sym_char,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [387] = 2,
    ACTIONS(82), 5,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_RBRACE,
    ACTIONS(84), 6,
      anon_sym_string,
      anon_sym_char,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [403] = 2,
    ACTIONS(86), 5,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_RBRACE,
    ACTIONS(88), 6,
      anon_sym_string,
      anon_sym_char,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [419] = 2,
    ACTIONS(90), 5,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_RBRACE,
    ACTIONS(92), 6,
      anon_sym_string,
      anon_sym_char,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [435] = 2,
    ACTIONS(96), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(94), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [451] = 2,
    ACTIONS(98), 5,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_RBRACE,
    ACTIONS(100), 6,
      anon_sym_string,
      anon_sym_char,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [467] = 2,
    ACTIONS(102), 5,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_RBRACE,
    ACTIONS(104), 6,
      anon_sym_string,
      anon_sym_char,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [483] = 2,
    ACTIONS(106), 5,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_RBRACE,
    ACTIONS(108), 6,
      anon_sym_string,
      anon_sym_char,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [499] = 2,
    ACTIONS(68), 5,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_RBRACE,
    ACTIONS(70), 6,
      anon_sym_string,
      anon_sym_char,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [515] = 2,
    ACTIONS(110), 5,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_RBRACE,
    ACTIONS(112), 6,
      anon_sym_string,
      anon_sym_char,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [531] = 2,
    ACTIONS(114), 5,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_RBRACE,
    ACTIONS(116), 6,
      anon_sym_string,
      anon_sym_char,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [547] = 2,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [563] = 4,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameter_list_repeat1,
    STATE(71), 1,
      sym_type,
    ACTIONS(124), 6,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [581] = 5,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [601] = 4,
    STATE(28), 1,
      aux_sym__expression,
    ACTIONS(135), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(140), 2,
      sym_identifier,
      sym_number,
    ACTIONS(137), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [619] = 4,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameter_list_repeat1,
    STATE(71), 1,
      sym_type,
    ACTIONS(11), 6,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [637] = 4,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_parameter_list_repeat1,
    STATE(71), 1,
      sym_type,
    ACTIONS(11), 6,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [655] = 5,
    ACTIONS(147), 1,
      anon_sym_EQ,
    ACTIONS(149), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [675] = 2,
    ACTIONS(100), 3,
      anon_sym_string,
      anon_sym_char,
      sym_identifier,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
  [688] = 4,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [705] = 2,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(122), 7,
      anon_sym_RPAREN,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [718] = 4,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [735] = 2,
    ACTIONS(74), 3,
      anon_sym_string,
      anon_sym_char,
      sym_identifier,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
  [748] = 4,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [765] = 4,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [782] = 4,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [799] = 4,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [816] = 4,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [833] = 2,
    ACTIONS(84), 3,
      anon_sym_string,
      anon_sym_char,
      sym_identifier,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
  [846] = 1,
    ACTIONS(167), 8,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_identifier,
      sym_number,
  [857] = 1,
    ACTIONS(169), 8,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_identifier,
      sym_number,
  [868] = 4,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [885] = 2,
    ACTIONS(104), 3,
      anon_sym_string,
      anon_sym_char,
      sym_identifier,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
  [898] = 4,
    ACTIONS(173), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [915] = 2,
    ACTIONS(70), 3,
      anon_sym_string,
      anon_sym_char,
      sym_identifier,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
  [928] = 2,
    ACTIONS(177), 3,
      anon_sym_string,
      anon_sym_char,
      sym_identifier,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
  [941] = 2,
    ACTIONS(88), 3,
      anon_sym_string,
      anon_sym_char,
      sym_identifier,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
  [954] = 4,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [971] = 4,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [988] = 2,
    ACTIONS(92), 3,
      anon_sym_string,
      anon_sym_char,
      sym_identifier,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
  [1001] = 1,
    ACTIONS(183), 7,
      anon_sym_RPAREN,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_string,
      anon_sym_char,
  [1011] = 3,
    STATE(52), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1025] = 3,
    STATE(39), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1039] = 3,
    STATE(45), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1053] = 3,
    STATE(40), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1067] = 3,
    STATE(51), 1,
      aux_sym__expression,
    ACTIONS(133), 2,
      sym_identifier,
      sym_number,
    ACTIONS(131), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1081] = 2,
    ACTIONS(185), 1,
      sym_func_name,
    ACTIONS(187), 1,
      sym_identifier,
  [1088] = 1,
    ACTIONS(189), 2,
      sym_identifier,
      sym_number,
  [1093] = 1,
    ACTIONS(191), 2,
      sym_identifier,
      sym_number,
  [1098] = 2,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
  [1105] = 1,
    ACTIONS(195), 2,
      sym_identifier,
      sym_number,
  [1110] = 2,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_parameter_list,
  [1117] = 2,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
  [1124] = 2,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [1131] = 2,
    ACTIONS(203), 1,
      sym_func_name,
    ACTIONS(205), 1,
      sym_identifier,
  [1138] = 2,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [1145] = 1,
    ACTIONS(185), 1,
      sym_identifier,
  [1149] = 1,
    ACTIONS(207), 1,
      sym_identifier,
  [1153] = 1,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
  [1157] = 1,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
  [1161] = 1,
    ACTIONS(213), 1,
      sym_identifier,
  [1165] = 1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
  [1169] = 1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
  [1173] = 1,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
  [1177] = 1,
    ACTIONS(221), 1,
      anon_sym_EQ,
  [1181] = 1,
    ACTIONS(223), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 266,
  [SMALL_STATE(10)] = 292,
  [SMALL_STATE(11)] = 318,
  [SMALL_STATE(12)] = 335,
  [SMALL_STATE(13)] = 352,
  [SMALL_STATE(14)] = 371,
  [SMALL_STATE(15)] = 387,
  [SMALL_STATE(16)] = 403,
  [SMALL_STATE(17)] = 419,
  [SMALL_STATE(18)] = 435,
  [SMALL_STATE(19)] = 451,
  [SMALL_STATE(20)] = 467,
  [SMALL_STATE(21)] = 483,
  [SMALL_STATE(22)] = 499,
  [SMALL_STATE(23)] = 515,
  [SMALL_STATE(24)] = 531,
  [SMALL_STATE(25)] = 547,
  [SMALL_STATE(26)] = 563,
  [SMALL_STATE(27)] = 581,
  [SMALL_STATE(28)] = 601,
  [SMALL_STATE(29)] = 619,
  [SMALL_STATE(30)] = 637,
  [SMALL_STATE(31)] = 655,
  [SMALL_STATE(32)] = 675,
  [SMALL_STATE(33)] = 688,
  [SMALL_STATE(34)] = 705,
  [SMALL_STATE(35)] = 718,
  [SMALL_STATE(36)] = 735,
  [SMALL_STATE(37)] = 748,
  [SMALL_STATE(38)] = 765,
  [SMALL_STATE(39)] = 782,
  [SMALL_STATE(40)] = 799,
  [SMALL_STATE(41)] = 816,
  [SMALL_STATE(42)] = 833,
  [SMALL_STATE(43)] = 846,
  [SMALL_STATE(44)] = 857,
  [SMALL_STATE(45)] = 868,
  [SMALL_STATE(46)] = 885,
  [SMALL_STATE(47)] = 898,
  [SMALL_STATE(48)] = 915,
  [SMALL_STATE(49)] = 928,
  [SMALL_STATE(50)] = 941,
  [SMALL_STATE(51)] = 954,
  [SMALL_STATE(52)] = 971,
  [SMALL_STATE(53)] = 988,
  [SMALL_STATE(54)] = 1001,
  [SMALL_STATE(55)] = 1011,
  [SMALL_STATE(56)] = 1025,
  [SMALL_STATE(57)] = 1039,
  [SMALL_STATE(58)] = 1053,
  [SMALL_STATE(59)] = 1067,
  [SMALL_STATE(60)] = 1081,
  [SMALL_STATE(61)] = 1088,
  [SMALL_STATE(62)] = 1093,
  [SMALL_STATE(63)] = 1098,
  [SMALL_STATE(64)] = 1105,
  [SMALL_STATE(65)] = 1110,
  [SMALL_STATE(66)] = 1117,
  [SMALL_STATE(67)] = 1124,
  [SMALL_STATE(68)] = 1131,
  [SMALL_STATE(69)] = 1138,
  [SMALL_STATE(70)] = 1145,
  [SMALL_STATE(71)] = 1149,
  [SMALL_STATE(72)] = 1153,
  [SMALL_STATE(73)] = 1157,
  [SMALL_STATE(74)] = 1161,
  [SMALL_STATE(75)] = 1165,
  [SMALL_STATE(76)] = 1169,
  [SMALL_STATE(77)] = 1173,
  [SMALL_STATE(78)] = 1177,
  [SMALL_STATE(79)] = 1181,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(57),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(76),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(75),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(79),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, .production_id = 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 6),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 6),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, .production_id = 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, .production_id = 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 6),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 6),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_loop, 5, .production_id = 5),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_loop, 5, .production_id = 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(70),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression, 2), SHIFT_REPEAT(64),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression, 2), SHIFT_REPEAT(25),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression, 4, .production_id = 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression, 3, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [219] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
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
