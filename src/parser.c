#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 2
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

enum {
  sym__whitespace = 1,
  sym_func_name = 2,
  sym_string = 3,
  sym_comments = 4,
  anon_sym_urcl = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_EQ = 9,
  sym_type = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_SEMI = 13,
  anon_sym_return = 14,
  anon_sym_while = 15,
  anon_sym_if = 16,
  anon_sym_import = 17,
  anon_sym_else = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_STAR = 21,
  anon_sym_SLASH = 22,
  anon_sym_LT = 23,
  anon_sym_GT = 24,
  anon_sym_EQ_EQ = 25,
  anon_sym_BANG_EQ = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_GT_EQ = 28,
  sym_identifier = 29,
  sym_number = 30,
  sym_source_file = 31,
  sym_function_definition = 32,
  sym_urcl_codeblock = 33,
  sym_parameter_list = 34,
  sym_variable_definition = 35,
  sym_variable_assignment = 36,
  sym_block = 37,
  sym__statement = 38,
  sym_return_statement = 39,
  sym_while_loop = 40,
  sym_if_statement = 41,
  sym__expression = 42,
  sym_binary_expression = 43,
  sym_import_statement = 44,
  sym_func_call = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_parameter_list_repeat1 = 47,
  aux_sym_block_repeat1 = 48,
  alias_sym_equals = 49,
  alias_sym_keyword = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__whitespace] = "_whitespace",
  [sym_func_name] = "func_name",
  [sym_string] = "string",
  [sym_comments] = "comments",
  [anon_sym_urcl] = "urcl",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_type] = "type",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_return] = "return",
  [anon_sym_while] = "while",
  [anon_sym_if] = "if",
  [anon_sym_import] = "import",
  [anon_sym_else] = "else",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_function_definition] = "function_definition",
  [sym_urcl_codeblock] = "urcl_codeblock",
  [sym_parameter_list] = "parameter_list",
  [sym_variable_definition] = "variable_definition",
  [sym_variable_assignment] = "variable_assignment",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym_while_loop] = "while_loop",
  [sym_if_statement] = "if_statement",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_import_statement] = "import_statement",
  [sym_func_call] = "func_call",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [alias_sym_equals] = "equals",
  [alias_sym_keyword] = "keyword",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__whitespace] = sym__whitespace,
  [sym_func_name] = sym_func_name,
  [sym_string] = sym_string,
  [sym_comments] = sym_comments,
  [anon_sym_urcl] = anon_sym_urcl,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_type] = sym_type,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_function_definition] = sym_function_definition,
  [sym_urcl_codeblock] = sym_urcl_codeblock,
  [sym_parameter_list] = sym_parameter_list,
  [sym_variable_definition] = sym_variable_definition,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym_while_loop] = sym_while_loop,
  [sym_if_statement] = sym_if_statement,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_import_statement] = sym_import_statement,
  [sym_func_call] = sym_func_call,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [alias_sym_equals] = alias_sym_equals,
  [alias_sym_keyword] = alias_sym_keyword,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_func_name] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comments] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_urcl] = {
    .visible = true,
    .named = false,
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
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_import] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
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
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_urcl_codeblock] = {
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
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_func_call] = {
    .visible = true,
    .named = true,
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
  [alias_sym_equals] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_equals,
  },
  [2] = {
    [2] = alias_sym_equals,
  },
  [4] = {
    [0] = alias_sym_keyword,
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
      if (eof) ADVANCE(47);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ';') ADVANCE(64);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == 'w') ADVANCE(22);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ';') ADVANCE(64);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '8') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 45:
      if (eof) ADVANCE(47);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(64);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_func_name);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_func_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_comments);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_urcl);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_urcl);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_type);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '8') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 45},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 45},
  [6] = {.lex_state = 45},
  [7] = {.lex_state = 45},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 46},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 46},
  [24] = {.lex_state = 46},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 45},
  [27] = {.lex_state = 45},
  [28] = {.lex_state = 45},
  [29] = {.lex_state = 45},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 45},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 45},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [sym_comments] = ACTIONS(3),
    [anon_sym_urcl] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym_function_definition] = STATE(3),
    [sym_urcl_codeblock] = STATE(55),
    [sym_variable_definition] = STATE(55),
    [sym_variable_assignment] = STATE(55),
    [sym_block] = STATE(55),
    [sym__statement] = STATE(3),
    [sym_return_statement] = STATE(55),
    [sym_while_loop] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_import_statement] = STATE(55),
    [sym_func_call] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_urcl] = ACTIONS(7),
    [sym_type] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_urcl,
    ACTIONS(28), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(40), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      anon_sym_import,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(2), 5,
      sym_function_definition,
      sym__statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_source_file_repeat1,
    STATE(55), 7,
      sym_urcl_codeblock,
      sym_variable_definition,
      sym_variable_assignment,
      sym_block,
      sym_return_statement,
      sym_import_statement,
      sym_func_call,
  [48] = 12,
    ACTIONS(7), 1,
      anon_sym_urcl,
    ACTIONS(9), 1,
      sym_type,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_import,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(2), 5,
      sym_function_definition,
      sym__statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_source_file_repeat1,
    STATE(55), 7,
      sym_urcl_codeblock,
      sym_variable_definition,
      sym_variable_assignment,
      sym_block,
      sym_return_statement,
      sym_import_statement,
      sym_func_call,
  [96] = 12,
    ACTIONS(7), 1,
      anon_sym_urcl,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_import,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_type,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(8), 4,
      sym__statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
    STATE(55), 7,
      sym_urcl_codeblock,
      sym_variable_definition,
      sym_variable_assignment,
      sym_block,
      sym_return_statement,
      sym_import_statement,
      sym_func_call,
  [143] = 12,
    ACTIONS(7), 1,
      anon_sym_urcl,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_import,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_type,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(8), 4,
      sym__statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
    STATE(55), 7,
      sym_urcl_codeblock,
      sym_variable_definition,
      sym_variable_assignment,
      sym_block,
      sym_return_statement,
      sym_import_statement,
      sym_func_call,
  [190] = 12,
    ACTIONS(7), 1,
      anon_sym_urcl,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_import,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_type,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(5), 4,
      sym__statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
    STATE(55), 7,
      sym_urcl_codeblock,
      sym_variable_definition,
      sym_variable_assignment,
      sym_block,
      sym_return_statement,
      sym_import_statement,
      sym_func_call,
  [237] = 12,
    ACTIONS(7), 1,
      anon_sym_urcl,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_import,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_type,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(4), 4,
      sym__statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
    STATE(55), 7,
      sym_urcl_codeblock,
      sym_variable_definition,
      sym_variable_assignment,
      sym_block,
      sym_return_statement,
      sym_import_statement,
      sym_func_call,
  [284] = 12,
    ACTIONS(61), 1,
      anon_sym_urcl,
    ACTIONS(64), 1,
      sym_type,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      anon_sym_return,
    ACTIONS(75), 1,
      anon_sym_while,
    ACTIONS(78), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_import,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(8), 4,
      sym__statement,
      sym_while_loop,
      sym_if_statement,
      aux_sym_block_repeat1,
    STATE(55), 7,
      sym_urcl_codeblock,
      sym_variable_definition,
      sym_variable_assignment,
      sym_block,
      sym_return_statement,
      sym_import_statement,
      sym_func_call,
  [331] = 5,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(91), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [358] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(95), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 10,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [380] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(99), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 10,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [402] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(103), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [423] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(107), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [444] = 5,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(105), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [469] = 6,
    ACTIONS(113), 1,
      anon_sym_STAR,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 4,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [496] = 7,
    ACTIONS(113), 1,
      anon_sym_STAR,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [524] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(123), 7,
      anon_sym_urcl,
      sym_type,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      anon_sym_import,
      sym_identifier,
  [544] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(127), 8,
      anon_sym_urcl,
      sym_type,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      anon_sym_import,
      anon_sym_else,
      sym_identifier,
  [564] = 7,
    ACTIONS(113), 1,
      anon_sym_STAR,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [592] = 7,
    ACTIONS(113), 1,
      anon_sym_STAR,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [620] = 7,
    ACTIONS(113), 1,
      anon_sym_STAR,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [648] = 7,
    ACTIONS(113), 1,
      anon_sym_STAR,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [676] = 4,
    ACTIONS(141), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(139), 7,
      anon_sym_urcl,
      sym_type,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      anon_sym_import,
      sym_identifier,
  [698] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(123), 8,
      anon_sym_urcl,
      sym_type,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      anon_sym_import,
      anon_sym_else,
      sym_identifier,
  [718] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(127), 7,
      anon_sym_urcl,
      sym_type,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      anon_sym_import,
      sym_identifier,
  [738] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(145), 7,
      anon_sym_urcl,
      sym_type,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      anon_sym_import,
      sym_identifier,
  [757] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(149), 7,
      anon_sym_urcl,
      sym_type,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      anon_sym_import,
      sym_identifier,
  [776] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(153), 7,
      anon_sym_urcl,
      sym_type,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      anon_sym_import,
      sym_identifier,
  [795] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(157), 7,
      anon_sym_urcl,
      sym_type,
      anon_sym_return,
      anon_sym_while,
      anon_sym_if,
      anon_sym_import,
      sym_identifier,
  [813] = 4,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      sym_number,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(20), 3,
      sym__expression,
      sym_binary_expression,
      sym_func_call,
  [829] = 4,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(163), 1,
      sym_number,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(19), 3,
      sym__expression,
      sym_binary_expression,
      sym_func_call,
  [845] = 4,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      sym_number,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(22), 3,
      sym__expression,
      sym_binary_expression,
      sym_func_call,
  [861] = 4,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(167), 1,
      sym_number,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(15), 3,
      sym__expression,
      sym_binary_expression,
      sym_func_call,
  [877] = 4,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(169), 1,
      sym_number,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(14), 3,
      sym__expression,
      sym_binary_expression,
      sym_func_call,
  [893] = 4,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_number,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(13), 3,
      sym__expression,
      sym_binary_expression,
      sym_func_call,
  [909] = 4,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(173), 1,
      sym_number,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(16), 3,
      sym__expression,
      sym_binary_expression,
      sym_func_call,
  [925] = 4,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_number,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    STATE(21), 3,
      sym__expression,
      sym_binary_expression,
      sym_func_call,
  [941] = 5,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(179), 1,
      sym_type,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(42), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [958] = 4,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(187), 2,
      sym_type,
      sym_identifier,
  [973] = 5,
    ACTIONS(179), 1,
      sym_type,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [990] = 4,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(195), 2,
      sym_type,
      sym_identifier,
  [1005] = 5,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(197), 1,
      sym_type,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(42), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1022] = 4,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_EQ,
    STATE(12), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1036] = 3,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(207), 2,
      sym_type,
      sym_identifier,
  [1048] = 3,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
    ACTIONS(195), 2,
      sym_type,
      sym_identifier,
  [1060] = 3,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_block,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1071] = 3,
    ACTIONS(209), 1,
      sym_func_name,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1082] = 3,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1093] = 3,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1104] = 3,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1115] = 3,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1126] = 2,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1134] = 2,
    ACTIONS(217), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1142] = 2,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1150] = 2,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1158] = 2,
    ACTIONS(223), 1,
      sym_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1166] = 2,
    ACTIONS(225), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1174] = 2,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1182] = 2,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1190] = 2,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1198] = 2,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
  [1206] = 2,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comments,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 143,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 284,
  [SMALL_STATE(9)] = 331,
  [SMALL_STATE(10)] = 358,
  [SMALL_STATE(11)] = 380,
  [SMALL_STATE(12)] = 402,
  [SMALL_STATE(13)] = 423,
  [SMALL_STATE(14)] = 444,
  [SMALL_STATE(15)] = 469,
  [SMALL_STATE(16)] = 496,
  [SMALL_STATE(17)] = 524,
  [SMALL_STATE(18)] = 544,
  [SMALL_STATE(19)] = 564,
  [SMALL_STATE(20)] = 592,
  [SMALL_STATE(21)] = 620,
  [SMALL_STATE(22)] = 648,
  [SMALL_STATE(23)] = 676,
  [SMALL_STATE(24)] = 698,
  [SMALL_STATE(25)] = 718,
  [SMALL_STATE(26)] = 738,
  [SMALL_STATE(27)] = 757,
  [SMALL_STATE(28)] = 776,
  [SMALL_STATE(29)] = 795,
  [SMALL_STATE(30)] = 813,
  [SMALL_STATE(31)] = 829,
  [SMALL_STATE(32)] = 845,
  [SMALL_STATE(33)] = 861,
  [SMALL_STATE(34)] = 877,
  [SMALL_STATE(35)] = 893,
  [SMALL_STATE(36)] = 909,
  [SMALL_STATE(37)] = 925,
  [SMALL_STATE(38)] = 941,
  [SMALL_STATE(39)] = 958,
  [SMALL_STATE(40)] = 973,
  [SMALL_STATE(41)] = 990,
  [SMALL_STATE(42)] = 1005,
  [SMALL_STATE(43)] = 1022,
  [SMALL_STATE(44)] = 1036,
  [SMALL_STATE(45)] = 1048,
  [SMALL_STATE(46)] = 1060,
  [SMALL_STATE(47)] = 1071,
  [SMALL_STATE(48)] = 1082,
  [SMALL_STATE(49)] = 1093,
  [SMALL_STATE(50)] = 1104,
  [SMALL_STATE(51)] = 1115,
  [SMALL_STATE(52)] = 1126,
  [SMALL_STATE(53)] = 1134,
  [SMALL_STATE(54)] = 1142,
  [SMALL_STATE(55)] = 1150,
  [SMALL_STATE(56)] = 1158,
  [SMALL_STATE(57)] = 1166,
  [SMALL_STATE(58)] = 1174,
  [SMALL_STATE(59)] = 1182,
  [SMALL_STATE(60)] = 1190,
  [SMALL_STATE(61)] = 1198,
  [SMALL_STATE(62)] = 1206,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(58),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(43),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_loop, 5, .production_id = 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_loop, 5, .production_id = 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(52),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(39),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_codeblock, 2),
  [219] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
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
