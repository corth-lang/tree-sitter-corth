#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 130
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_include = 1,
  anon_sym_proc = 2,
  anon_sym_memory = 3,
  anon_sym_end = 4,
  anon_sym_DASH_GT = 5,
  anon_sym_in = 6,
  anon_sym_macro = 7,
  anon_sym_endmacro = 8,
  anon_sym_if = 9,
  anon_sym_else = 10,
  anon_sym_while = 11,
  anon_sym_do = 12,
  anon_sym_let = 13,
  anon_sym_peek = 14,
  sym_name = 15,
  sym_string_literal = 16,
  anon_sym_int = 17,
  anon_sym_bool = 18,
  sym_source_file = 19,
  sym_include_statement = 20,
  sym_proc_definition = 21,
  sym_procedure_signature = 22,
  sym_argument_signature = 23,
  sym_return_signature = 24,
  sym_macro_definition = 25,
  sym_expandable = 26,
  sym_code_block = 27,
  sym_else_code_block = 28,
  sym_do_code_block = 29,
  sym_callable = 30,
  sym_local_allocation = 31,
  sym_if_else_statement = 32,
  sym_if_statement = 33,
  sym_let_statement = 34,
  sym_peek_statement = 35,
  sym_while_do_statement = 36,
  sym_intrinsic_type = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_argument_signature_repeat1 = 39,
  aux_sym_macro_definition_repeat1 = 40,
  aux_sym_code_block_repeat1 = 41,
  aux_sym_let_statement_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_include] = "include",
  [anon_sym_proc] = "proc",
  [anon_sym_memory] = "memory",
  [anon_sym_end] = "end",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_in] = "in",
  [anon_sym_macro] = "macro",
  [anon_sym_endmacro] = "endmacro",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_let] = "let",
  [anon_sym_peek] = "peek",
  [sym_name] = "name",
  [sym_string_literal] = "string_literal",
  [anon_sym_int] = "int",
  [anon_sym_bool] = "bool",
  [sym_source_file] = "source_file",
  [sym_include_statement] = "include_statement",
  [sym_proc_definition] = "proc_definition",
  [sym_procedure_signature] = "procedure_signature",
  [sym_argument_signature] = "argument_signature",
  [sym_return_signature] = "return_signature",
  [sym_macro_definition] = "macro_definition",
  [sym_expandable] = "expandable",
  [sym_code_block] = "code_block",
  [sym_else_code_block] = "else_code_block",
  [sym_do_code_block] = "do_code_block",
  [sym_callable] = "callable",
  [sym_local_allocation] = "local_allocation",
  [sym_if_else_statement] = "if_else_statement",
  [sym_if_statement] = "if_statement",
  [sym_let_statement] = "let_statement",
  [sym_peek_statement] = "peek_statement",
  [sym_while_do_statement] = "while_do_statement",
  [sym_intrinsic_type] = "intrinsic_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_argument_signature_repeat1] = "argument_signature_repeat1",
  [aux_sym_macro_definition_repeat1] = "macro_definition_repeat1",
  [aux_sym_code_block_repeat1] = "code_block_repeat1",
  [aux_sym_let_statement_repeat1] = "let_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_proc] = anon_sym_proc,
  [anon_sym_memory] = anon_sym_memory,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_endmacro] = anon_sym_endmacro,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_peek] = anon_sym_peek,
  [sym_name] = sym_name,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bool] = anon_sym_bool,
  [sym_source_file] = sym_source_file,
  [sym_include_statement] = sym_include_statement,
  [sym_proc_definition] = sym_proc_definition,
  [sym_procedure_signature] = sym_procedure_signature,
  [sym_argument_signature] = sym_argument_signature,
  [sym_return_signature] = sym_return_signature,
  [sym_macro_definition] = sym_macro_definition,
  [sym_expandable] = sym_expandable,
  [sym_code_block] = sym_code_block,
  [sym_else_code_block] = sym_else_code_block,
  [sym_do_code_block] = sym_do_code_block,
  [sym_callable] = sym_callable,
  [sym_local_allocation] = sym_local_allocation,
  [sym_if_else_statement] = sym_if_else_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_let_statement] = sym_let_statement,
  [sym_peek_statement] = sym_peek_statement,
  [sym_while_do_statement] = sym_while_do_statement,
  [sym_intrinsic_type] = sym_intrinsic_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_argument_signature_repeat1] = aux_sym_argument_signature_repeat1,
  [aux_sym_macro_definition_repeat1] = aux_sym_macro_definition_repeat1,
  [aux_sym_code_block_repeat1] = aux_sym_code_block_repeat1,
  [aux_sym_let_statement_repeat1] = aux_sym_let_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_memory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endmacro] = {
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
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_peek] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_return_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_expandable] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_else_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_do_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_callable] = {
    .visible = true,
    .named = true,
  },
  [sym_local_allocation] = {
    .visible = true,
    .named = true,
  },
  [sym_if_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_peek_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_do_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_intrinsic_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_signature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 8,
  [18] = 11,
  [19] = 19,
  [20] = 20,
  [21] = 10,
  [22] = 22,
  [23] = 11,
  [24] = 9,
  [25] = 13,
  [26] = 14,
  [27] = 20,
  [28] = 15,
  [29] = 10,
  [30] = 22,
  [31] = 22,
  [32] = 32,
  [33] = 33,
  [34] = 20,
  [35] = 13,
  [36] = 14,
  [37] = 15,
  [38] = 8,
  [39] = 39,
  [40] = 40,
  [41] = 33,
  [42] = 33,
  [43] = 40,
  [44] = 40,
  [45] = 40,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 48,
  [58] = 58,
  [59] = 59,
  [60] = 50,
  [61] = 47,
  [62] = 46,
  [63] = 46,
  [64] = 64,
  [65] = 49,
  [66] = 52,
  [67] = 67,
  [68] = 68,
  [69] = 54,
  [70] = 53,
  [71] = 47,
  [72] = 72,
  [73] = 56,
  [74] = 48,
  [75] = 75,
  [76] = 76,
  [77] = 55,
  [78] = 51,
  [79] = 79,
  [80] = 56,
  [81] = 55,
  [82] = 54,
  [83] = 49,
  [84] = 53,
  [85] = 52,
  [86] = 51,
  [87] = 50,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 91,
  [93] = 93,
  [94] = 49,
  [95] = 95,
  [96] = 96,
  [97] = 54,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 100,
  [104] = 104,
  [105] = 100,
  [106] = 106,
  [107] = 32,
  [108] = 108,
  [109] = 106,
  [110] = 32,
  [111] = 111,
  [112] = 101,
  [113] = 113,
  [114] = 106,
  [115] = 111,
  [116] = 111,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 119,
  [124] = 124,
  [125] = 119,
  [126] = 122,
  [127] = 122,
  [128] = 124,
  [129] = 124,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '/') ADVANCE(826);
      if (lookahead == 'b') ADVANCE(1024);
      if (lookahead == 'd') ADVANCE(1018);
      if (lookahead == 'e') ADVANCE(1010);
      if (lookahead == 'i') ADVANCE(1005);
      if (lookahead == 'l') ADVANCE(997);
      if (lookahead == 'm') ADVANCE(989);
      if (lookahead == 'p') ADVANCE(1003);
      if (lookahead == 'w') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(1428);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') SKIP(180)
      if (lookahead == '/') SKIP(45)
      END_STATE();
    case 4:
      if (lookahead == '*') SKIP(181)
      if (lookahead == '/') SKIP(57)
      END_STATE();
    case 5:
      if (lookahead == '*') SKIP(182)
      if (lookahead == '/') SKIP(63)
      END_STATE();
    case 6:
      if (lookahead == '*') SKIP(183)
      if (lookahead == '/') SKIP(66)
      END_STATE();
    case 7:
      if (lookahead == '*') SKIP(184)
      if (lookahead == '/') SKIP(68)
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(289);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(1453);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(1434);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '/') SKIP(31)
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 48:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '\n') SKIP(116)
      if (lookahead == '*') SKIP(93)
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') SKIP(50)
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead != 0) SKIP(57)
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '\n') SKIP(116)
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') SKIP(50)
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead != 0) SKIP(57)
      END_STATE();
    case 52:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '\n') SKIP(116)
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') SKIP(50)
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(1461);
      if (lookahead != 0) SKIP(57)
      END_STATE();
    case 53:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '\n') SKIP(116)
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') SKIP(50)
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead != 0) SKIP(57)
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '\n') SKIP(116)
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') SKIP(50)
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead != 0) SKIP(57)
      END_STATE();
    case 55:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '\n') SKIP(116)
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') SKIP(50)
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead != 0) SKIP(57)
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '\n') SKIP(116)
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') SKIP(50)
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 't') ADVANCE(1442);
      if (lookahead != 0) SKIP(57)
      END_STATE();
    case 57:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '\n') SKIP(116)
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') SKIP(50)
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead != 0) SKIP(57)
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '\n') SKIP(118)
      if (lookahead == '*') SKIP(98)
      if (lookahead == '/') SKIP(58)
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead != 0) SKIP(63)
      END_STATE();
    case 59:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '\n') SKIP(118)
      if (lookahead == '/') SKIP(58)
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(1463);
      if (lookahead != 0) SKIP(63)
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '\n') SKIP(118)
      if (lookahead == '/') SKIP(58)
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead != 0) SKIP(63)
      END_STATE();
    case 61:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '\n') SKIP(118)
      if (lookahead == '/') SKIP(58)
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead != 0) SKIP(63)
      END_STATE();
    case 62:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '\n') SKIP(118)
      if (lookahead == '/') SKIP(58)
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead != 0) SKIP(63)
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '\n') SKIP(118)
      if (lookahead == '/') SKIP(58)
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead != 0) SKIP(63)
      END_STATE();
    case 64:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '\n') SKIP(122)
      if (lookahead == '*') SKIP(100)
      if (lookahead == '/') SKIP(64)
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead != 0) SKIP(66)
      END_STATE();
    case 65:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '\n') SKIP(122)
      if (lookahead == '/') SKIP(64)
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead != 0) SKIP(66)
      END_STATE();
    case 66:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '\n') SKIP(122)
      if (lookahead == '/') SKIP(64)
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead != 0) SKIP(66)
      END_STATE();
    case 67:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(68)
      if (lookahead == '\n') SKIP(124)
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '*') SKIP(101)
      if (lookahead == '/') SKIP(67)
      if (lookahead != 0) SKIP(68)
      END_STATE();
    case 68:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(68)
      if (lookahead == '\n') SKIP(124)
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '/') SKIP(67)
      if (lookahead != 0) SKIP(68)
      END_STATE();
    case 69:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '"') ADVANCE(1431);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '"') ADVANCE(1431);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 72:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 73:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(86)
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead != 0) SKIP(86)
      END_STATE();
    case 74:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(86)
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead != 0) SKIP(86)
      END_STATE();
    case 75:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(86)
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead != 0) SKIP(86)
      END_STATE();
    case 76:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(86)
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead != 0) SKIP(86)
      END_STATE();
    case 77:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(86)
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead != 0) SKIP(86)
      END_STATE();
    case 78:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(86)
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead != 0) SKIP(86)
      END_STATE();
    case 79:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(86)
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead != 0) SKIP(86)
      END_STATE();
    case 80:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(86)
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead != 0) SKIP(86)
      END_STATE();
    case 81:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(86)
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(336);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead != 0) SKIP(86)
      END_STATE();
    case 82:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(86)
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead != 0) SKIP(86)
      END_STATE();
    case 83:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(86)
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead != 0) SKIP(86)
      END_STATE();
    case 84:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(86)
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead != 0) SKIP(86)
      END_STATE();
    case 85:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(86)
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead != 0) SKIP(86)
      END_STATE();
    case 86:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '*') SKIP(86)
      if (lookahead == '/') SKIP(86)
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead != 0) SKIP(86)
      END_STATE();
    case 87:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(93)
      if (lookahead == '\n') SKIP(117)
      if (lookahead == '*') SKIP(93)
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') SKIP(93)
      if (lookahead == '>') ADVANCE(298);
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead != 0) SKIP(93)
      END_STATE();
    case 88:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(93)
      if (lookahead == '\n') SKIP(117)
      if (lookahead == '*') SKIP(93)
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') SKIP(93)
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(1462);
      if (lookahead != 0) SKIP(93)
      END_STATE();
    case 89:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(93)
      if (lookahead == '\n') SKIP(117)
      if (lookahead == '*') SKIP(93)
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') SKIP(93)
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead != 0) SKIP(93)
      END_STATE();
    case 90:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(93)
      if (lookahead == '\n') SKIP(117)
      if (lookahead == '*') SKIP(93)
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') SKIP(93)
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead != 0) SKIP(93)
      END_STATE();
    case 91:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(93)
      if (lookahead == '\n') SKIP(117)
      if (lookahead == '*') SKIP(93)
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') SKIP(93)
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead != 0) SKIP(93)
      END_STATE();
    case 92:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(93)
      if (lookahead == '\n') SKIP(117)
      if (lookahead == '*') SKIP(93)
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') SKIP(93)
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 't') ADVANCE(1443);
      if (lookahead != 0) SKIP(93)
      END_STATE();
    case 93:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(93)
      if (lookahead == '\n') SKIP(117)
      if (lookahead == '*') SKIP(93)
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') SKIP(93)
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead != 0) SKIP(93)
      END_STATE();
    case 94:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98)
      if (lookahead == '\n') SKIP(119)
      if (lookahead == '*') SKIP(98)
      if (lookahead == '/') SKIP(98)
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(1464);
      if (lookahead != 0) SKIP(98)
      END_STATE();
    case 95:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98)
      if (lookahead == '\n') SKIP(119)
      if (lookahead == '*') SKIP(98)
      if (lookahead == '/') SKIP(98)
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead != 0) SKIP(98)
      END_STATE();
    case 96:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98)
      if (lookahead == '\n') SKIP(119)
      if (lookahead == '*') SKIP(98)
      if (lookahead == '/') SKIP(98)
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead != 0) SKIP(98)
      END_STATE();
    case 97:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98)
      if (lookahead == '\n') SKIP(119)
      if (lookahead == '*') SKIP(98)
      if (lookahead == '/') SKIP(98)
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead != 0) SKIP(98)
      END_STATE();
    case 98:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98)
      if (lookahead == '\n') SKIP(119)
      if (lookahead == '*') SKIP(98)
      if (lookahead == '/') SKIP(98)
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead != 0) SKIP(98)
      END_STATE();
    case 99:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(100)
      if (lookahead == '\n') SKIP(123)
      if (lookahead == '*') SKIP(100)
      if (lookahead == '/') SKIP(100)
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead != 0) SKIP(100)
      END_STATE();
    case 100:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(100)
      if (lookahead == '\n') SKIP(123)
      if (lookahead == '*') SKIP(100)
      if (lookahead == '/') SKIP(100)
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead != 0) SKIP(100)
      END_STATE();
    case 101:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(101)
      if (lookahead == '\n') SKIP(125)
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '*') SKIP(101)
      if (lookahead == '/') SKIP(101)
      if (lookahead != 0) SKIP(101)
      END_STATE();
    case 102:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '"') ADVANCE(1432);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 104:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 105:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead == 'b') ADVANCE(559);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == 'i') ADVANCE(541);
      if (lookahead == 'l') ADVANCE(533);
      if (lookahead == 'm') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(539);
      if (lookahead == 'w') ADVANCE(543);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 106:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == '-') ADVANCE(1287);
      if (lookahead == '/') ADVANCE(1286);
      if (lookahead == 'b') ADVANCE(1316);
      if (lookahead == 'd') ADVANCE(1310);
      if (lookahead == 'e') ADVANCE(1305);
      if (lookahead == 'i') ADVANCE(1301);
      if (lookahead == 'l') ADVANCE(1295);
      if (lookahead == 'm') ADVANCE(1288);
      if (lookahead == 'p') ADVANCE(1300);
      if (lookahead == 'w') ADVANCE(1302);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 107:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(107)
      if (lookahead == '/') SKIP(3)
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 108:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(108)
      if (lookahead == '*') SKIP(146)
      if (lookahead == '/') SKIP(147)
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(176);
      if (lookahead != 0) SKIP(180)
      END_STATE();
    case 109:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109)
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '/') ADVANCE(984);
      if (lookahead == 'b') ADVANCE(1024);
      if (lookahead == 'd') ADVANCE(1018);
      if (lookahead == 'e') ADVANCE(1010);
      if (lookahead == 'i') ADVANCE(1005);
      if (lookahead == 'l') ADVANCE(997);
      if (lookahead == 'm') ADVANCE(998);
      if (lookahead == 'p') ADVANCE(1003);
      if (lookahead == 'w') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(1428);
      END_STATE();
    case 110:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(110)
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '/') ADVANCE(942);
      if (lookahead == 'e') ADVANCE(1011);
      if (lookahead == 'i') ADVANCE(1006);
      if (lookahead == 'l') ADVANCE(997);
      if (lookahead == 'm') ADVANCE(998);
      if (lookahead == 'p') ADVANCE(1004);
      if (lookahead == 'w') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(1428);
      END_STATE();
    case 111:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(542);
      if (lookahead == 'l') ADVANCE(533);
      if (lookahead == 'm') ADVANCE(534);
      if (lookahead == 'p') ADVANCE(540);
      if (lookahead == 'w') ADVANCE(543);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 112:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1388);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == '/') ADVANCE(1368);
      if (lookahead == 'e') ADVANCE(1380);
      if (lookahead == 'i') ADVANCE(1376);
      if (lookahead == 'l') ADVANCE(1370);
      if (lookahead == 'm') ADVANCE(1371);
      if (lookahead == 'p') ADVANCE(1375);
      if (lookahead == 'w') ADVANCE(1377);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 113:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(113)
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '/') ADVANCE(981);
      if (lookahead == 'd') ADVANCE(1018);
      if (lookahead == 'i') ADVANCE(1006);
      if (lookahead == 'l') ADVANCE(997);
      if (lookahead == 'm') ADVANCE(998);
      if (lookahead == 'p') ADVANCE(1004);
      if (lookahead == 'w') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(1428);
      END_STATE();
    case 114:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '/') ADVANCE(522);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'i') ADVANCE(542);
      if (lookahead == 'l') ADVANCE(533);
      if (lookahead == 'm') ADVANCE(534);
      if (lookahead == 'p') ADVANCE(540);
      if (lookahead == 'w') ADVANCE(543);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 115:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1427);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == '/') ADVANCE(1410);
      if (lookahead == 'd') ADVANCE(1422);
      if (lookahead == 'i') ADVANCE(1416);
      if (lookahead == 'l') ADVANCE(1412);
      if (lookahead == 'm') ADVANCE(1413);
      if (lookahead == 'p') ADVANCE(1411);
      if (lookahead == 'w') ADVANCE(1417);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 116:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(116)
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') SKIP(4)
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 117:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(117)
      if (lookahead == '*') SKIP(148)
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '/') SKIP(149)
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead != 0) SKIP(181)
      END_STATE();
    case 118:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(118)
      if (lookahead == '/') SKIP(5)
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 119:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(119)
      if (lookahead == '*') SKIP(150)
      if (lookahead == '/') SKIP(151)
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead != 0) SKIP(182)
      END_STATE();
    case 120:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120)
      if (lookahead == '/') ADVANCE(982);
      if (lookahead == 'i') ADVANCE(1016);
      if (lookahead != 0) ADVANCE(1428);
      END_STATE();
    case 121:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(121)
      if (lookahead == '/') ADVANCE(983);
      if (lookahead != 0) ADVANCE(1428);
      END_STATE();
    case 122:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(122)
      if (lookahead == '/') SKIP(6)
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 123:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(123)
      if (lookahead == '*') SKIP(152)
      if (lookahead == '/') SKIP(153)
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead != 0) SKIP(183)
      END_STATE();
    case 124:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(124)
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '/') SKIP(7)
      END_STATE();
    case 125:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(125)
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '*') SKIP(154)
      if (lookahead == '/') SKIP(155)
      if (lookahead != 0) SKIP(184)
      END_STATE();
    case 126:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead == '"') ADVANCE(1430);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 127:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead == '"') ADVANCE(1433);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 128:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '/') ADVANCE(523);
      if (lookahead == 'b') ADVANCE(559);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == 'i') ADVANCE(541);
      if (lookahead == 'l') ADVANCE(533);
      if (lookahead == 'm') ADVANCE(534);
      if (lookahead == 'p') ADVANCE(539);
      if (lookahead == 'w') ADVANCE(543);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 129:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1366);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == '-') ADVANCE(1332);
      if (lookahead == '/') ADVANCE(1331);
      if (lookahead == 'b') ADVANCE(1359);
      if (lookahead == 'd') ADVANCE(1354);
      if (lookahead == 'e') ADVANCE(1349);
      if (lookahead == 'i') ADVANCE(1345);
      if (lookahead == 'l') ADVANCE(1338);
      if (lookahead == 'm') ADVANCE(1339);
      if (lookahead == 'p') ADVANCE(1344);
      if (lookahead == 'w') ADVANCE(1346);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 130:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(130)
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '/') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1017);
      if (lookahead == 'i') ADVANCE(1006);
      if (lookahead == 'l') ADVANCE(997);
      if (lookahead == 'm') ADVANCE(998);
      if (lookahead == 'p') ADVANCE(1004);
      if (lookahead == 'w') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(1428);
      END_STATE();
    case 131:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '/') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(542);
      if (lookahead == 'l') ADVANCE(533);
      if (lookahead == 'm') ADVANCE(534);
      if (lookahead == 'p') ADVANCE(540);
      if (lookahead == 'w') ADVANCE(543);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 132:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1408);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == '/') ADVANCE(1390);
      if (lookahead == 'e') ADVANCE(1403);
      if (lookahead == 'i') ADVANCE(1397);
      if (lookahead == 'l') ADVANCE(1393);
      if (lookahead == 'm') ADVANCE(1394);
      if (lookahead == 'p') ADVANCE(1392);
      if (lookahead == 'w') ADVANCE(1398);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 133:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(140);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(106);
      END_STATE();
    case 134:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(141);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 135:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(142);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 136:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(143);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '/') ADVANCE(132);
      END_STATE();
    case 137:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(144);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '/') ADVANCE(115);
      END_STATE();
    case 138:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(145);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 139:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(145);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    case 140:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*') ADVANCE(140);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(133);
      END_STATE();
    case 141:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*') ADVANCE(141);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(134);
      END_STATE();
    case 142:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*') ADVANCE(142);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(135);
      END_STATE();
    case 143:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*') ADVANCE(143);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(136);
      END_STATE();
    case 144:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*') ADVANCE(144);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(137);
      END_STATE();
    case 145:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*') ADVANCE(145);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(138);
      END_STATE();
    case 146:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == '/') SKIP(108)
      END_STATE();
    case 147:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == '/') SKIP(86)
      END_STATE();
    case 148:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') SKIP(181)
      if (lookahead == '*') SKIP(148)
      if (lookahead == '/') SKIP(117)
      END_STATE();
    case 149:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') SKIP(181)
      if (lookahead == '*') SKIP(148)
      if (lookahead == '/') SKIP(93)
      END_STATE();
    case 150:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') SKIP(182)
      if (lookahead == '*') SKIP(150)
      if (lookahead == '/') SKIP(119)
      END_STATE();
    case 151:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') SKIP(182)
      if (lookahead == '*') SKIP(150)
      if (lookahead == '/') SKIP(98)
      END_STATE();
    case 152:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') SKIP(183)
      if (lookahead == '*') SKIP(152)
      if (lookahead == '/') SKIP(123)
      END_STATE();
    case 153:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') SKIP(183)
      if (lookahead == '*') SKIP(152)
      if (lookahead == '/') SKIP(100)
      END_STATE();
    case 154:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') SKIP(184)
      if (lookahead == '*') SKIP(154)
      if (lookahead == '/') SKIP(125)
      END_STATE();
    case 155:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') SKIP(184)
      if (lookahead == '*') SKIP(154)
      if (lookahead == '/') SKIP(101)
      END_STATE();
    case 156:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '>') SKIP(181)
      if (lookahead == '*') SKIP(148)
      if (lookahead == '>') ADVANCE(289);
      END_STATE();
    case 157:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'a') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 158:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'c') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 159:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'c') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 160:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'c') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 161:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'd') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'e') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 163:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'l') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 164:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'l') SKIP(181)
      if (lookahead == '*') SKIP(148)
      if (lookahead == 'l') ADVANCE(1453);
      END_STATE();
    case 165:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'l') SKIP(182)
      if (lookahead == '*') SKIP(150)
      if (lookahead == 'l') ADVANCE(1453);
      END_STATE();
    case 166:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'n') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 167:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'n') SKIP(181)
      if (lookahead == '*') SKIP(148)
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 168:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'n') SKIP(182)
      if (lookahead == '*') SKIP(150)
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 169:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'n') SKIP(183)
      if (lookahead == '*') SKIP(152)
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 170:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'o') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 171:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'o') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 172:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'o') SKIP(181)
      if (lookahead == '*') SKIP(148)
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 173:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'o') SKIP(181)
      if (lookahead == '*') SKIP(148)
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 174:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'o') SKIP(182)
      if (lookahead == '*') SKIP(150)
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'o') SKIP(182)
      if (lookahead == '*') SKIP(150)
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 176:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'r') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 177:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'r') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 178:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 't') SKIP(181)
      if (lookahead == '*') SKIP(148)
      if (lookahead == 't') ADVANCE(1434);
      END_STATE();
    case 179:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != 'u') SKIP(180)
      if (lookahead == '*') SKIP(146)
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 180:
      if (lookahead != 0 &&
          lookahead != '*') SKIP(180)
      if (lookahead == '*') SKIP(146)
      END_STATE();
    case 181:
      if (lookahead != 0 &&
          lookahead != '*') SKIP(181)
      if (lookahead == '*') SKIP(148)
      END_STATE();
    case 182:
      if (lookahead != 0 &&
          lookahead != '*') SKIP(182)
      if (lookahead == '*') SKIP(150)
      END_STATE();
    case 183:
      if (lookahead != 0 &&
          lookahead != '*') SKIP(183)
      if (lookahead == '*') SKIP(152)
      END_STATE();
    case 184:
      if (lookahead != 0 &&
          lookahead != '*') SKIP(184)
      if (lookahead == '*') SKIP(154)
      END_STATE();
    case 185:
      if (eof) ADVANCE(194);
      if (lookahead == '*') SKIP(193)
      if (lookahead == '/') SKIP(187)
      END_STATE();
    case 186:
      if (eof) ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187)
      if (lookahead == '\n') SKIP(189)
      if (lookahead == '*') SKIP(188)
      if (lookahead == '/') SKIP(186)
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) SKIP(187)
      END_STATE();
    case 187:
      if (eof) ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187)
      if (lookahead == '\n') SKIP(189)
      if (lookahead == '/') SKIP(186)
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) SKIP(187)
      END_STATE();
    case 188:
      if (eof) ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(188)
      if (lookahead == '\n') SKIP(190)
      if (lookahead == '*') SKIP(188)
      if (lookahead == '/') SKIP(188)
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead != 0) SKIP(188)
      END_STATE();
    case 189:
      if (eof) ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(189)
      if (lookahead == '/') SKIP(185)
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 190:
      if (eof) ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(190)
      if (lookahead == '*') SKIP(191)
      if (lookahead == '/') SKIP(192)
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(176);
      if (lookahead != 0) SKIP(193)
      END_STATE();
    case 191:
      if (eof) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') SKIP(193)
      if (lookahead == '*') SKIP(191)
      if (lookahead == '/') SKIP(190)
      END_STATE();
    case 192:
      if (eof) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') SKIP(193)
      if (lookahead == '*') SKIP(191)
      if (lookahead == '/') SKIP(188)
      END_STATE();
    case 193:
      if (eof) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '*') SKIP(193)
      if (lookahead == '*') SKIP(191)
      END_STATE();
    case 194:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(668);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(720);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(773);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'n') ADVANCE(772);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1058);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'n') ADVANCE(1038);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'n') ADVANCE(1072);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1183);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'n') ADVANCE(1182);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1218);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'n') ADVANCE(1217);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_memory);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'm') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(716);
      if (lookahead == 'o') ADVANCE(440);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(769);
      if (lookahead == 'o') ADVANCE(441);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'm') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'm') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'm') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1179);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1214);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'm') ADVANCE(1289);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'm') ADVANCE(1333);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'c') ADVANCE(549);
      if (lookahead == 't') ADVANCE(1435);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'c') ADVANCE(583);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 't') ADVANCE(1436);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'c') ADVANCE(657);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 't') ADVANCE(1437);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(735);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 't') ADVANCE(1438);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'c') ADVANCE(788);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 't') ADVANCE(1439);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'c') ADVANCE(849);
      if (lookahead == 't') ADVANCE(1440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '*') ADVANCE(869);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == 'i') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(869);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '*') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(935);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'c') ADVANCE(966);
      if (lookahead == 't') ADVANCE(1441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == 'i') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(986);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 't') ADVANCE(1444);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 't') ADVANCE(1445);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(1013);
      if (lookahead == 't') ADVANCE(1452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(1434);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'c') ADVANCE(1047);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 't') ADVANCE(1446);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'c') ADVANCE(1081);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 't') ADVANCE(1447);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'c') ADVANCE(1198);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 't') ADVANCE(1448);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'c') ADVANCE(1233);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 't') ADVANCE(1449);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'c') ADVANCE(1307);
      if (lookahead == 't') ADVANCE(1450);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'c') ADVANCE(1351);
      if (lookahead == 't') ADVANCE(1451);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_endmacro);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_endmacro);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_endmacro);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_endmacro);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_endmacro);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_endmacro);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_endmacro);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_endmacro);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_endmacro);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_endmacro);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(668);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(720);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(773);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'n') ADVANCE(772);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1058);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'n') ADVANCE(1038);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'n') ADVANCE(1072);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1114);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'n') ADVANCE(1102);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1134);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'n') ADVANCE(1122);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1183);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'n') ADVANCE(1182);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1218);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'n') ADVANCE(1217);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 't') ADVANCE(456);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(668);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(720);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'n') ADVANCE(750);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(773);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'n') ADVANCE(772);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'n') ADVANCE(807);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1058);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'n') ADVANCE(1038);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'n') ADVANCE(1072);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1114);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'n') ADVANCE(1102);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 't') ADVANCE(473);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1134);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'n') ADVANCE(1122);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1183);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'n') ADVANCE(1182);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1218);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'n') ADVANCE(1217);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'n') ADVANCE(1249);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'n') ADVANCE(1267);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 't') ADVANCE(480);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_peek);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '*') ADVANCE(1324);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(567);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '*') ADVANCE(1388);
      if (lookahead == '/') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(567);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '*') ADVANCE(1408);
      if (lookahead == '/') ADVANCE(1262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(567);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '*') ADVANCE(1427);
      if (lookahead == '/') ADVANCE(1158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(567);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '*') ADVANCE(1366);
      if (lookahead == '/') ADVANCE(1207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(567);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'c') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'd') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'd') ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'e') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == 'r') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'f') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'f') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'h') ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'k') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'n') ADVANCE(530);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'l') ADVANCE(1454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'l') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'l') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'm') ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'o') ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'o') ADVANCE(528);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'r') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'r') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'r') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'u') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == 'y') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == '>') ADVANCE(291);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(589);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'c') ADVANCE(590);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(263);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(599);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'h') ADVANCE(593);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'k') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 't') ADVANCE(456);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == 'm') ADVANCE(570);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(1455);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(595);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(572);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(582);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'r') ADVANCE(591);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead == 'y') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(576);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 's') ADVANCE(598);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'u') ADVANCE(602);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'r') ADVANCE(586);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(600);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == '-') ADVANCE(829);
      if (lookahead == '/') ADVANCE(828);
      if (lookahead == 'b') ADVANCE(858);
      if (lookahead == 'd') ADVANCE(852);
      if (lookahead == 'e') ADVANCE(847);
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == 'l') ADVANCE(837);
      if (lookahead == 'm') ADVANCE(830);
      if (lookahead == 'p') ADVANCE(842);
      if (lookahead == 'w') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'h') ADVANCE(616);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'k') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead == 'm') ADVANCE(622);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'r') ADVANCE(614);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead == 'y') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(607);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 's') ADVANCE(620);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(609);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'o') ADVANCE(613);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(619);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(639);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(638);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'h') ADVANCE(642);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'k') ADVANCE(490);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(629);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(640);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead == 'y') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(641);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == '>') ADVANCE(292);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'o') ADVANCE(663);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'c') ADVANCE(664);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(265);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(673);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'h') ADVANCE(667);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'k') ADVANCE(491);
      if (lookahead == 'l') ADVANCE(668);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(668);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(668);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(668);
      if (lookahead == 'm') ADVANCE(644);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(1456);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(669);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'o') ADVANCE(646);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'o') ADVANCE(662);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'o') ADVANCE(656);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'r') ADVANCE(665);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'r') ADVANCE(659);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead == 'y') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 's') ADVANCE(672);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'u') ADVANCE(676);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(652);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(668);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(674);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'd') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'f') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'f') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(693);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'h') ADVANCE(688);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'k') ADVANCE(492);
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'r') ADVANCE(686);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead == 'y') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 's') ADVANCE(692);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(681);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(682);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(685);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(682);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(687);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(691);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == 'w') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(710);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(706);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(709);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(699);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'h') ADVANCE(713);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'k') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(700);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'r') ADVANCE(711);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead == 'y') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(704);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(712);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == '>') ADVANCE(293);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(742);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 's') ADVANCE(724);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'u') ADVANCE(749);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(730);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(720);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'o') ADVANCE(440);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(358);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(358);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(725);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'h') ADVANCE(745);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'k') ADVANCE(494);
      if (lookahead == 'l') ADVANCE(720);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(720);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(720);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(720);
      if (lookahead == 'm') ADVANCE(746);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(1457);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(721);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'o') ADVANCE(440);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'o') ADVANCE(717);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'o') ADVANCE(740);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'o') ADVANCE(734);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'r') ADVANCE(743);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'r') ADVANCE(736);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead == 'y') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'o') ADVANCE(741);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(723);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'r') ADVANCE(738);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(726);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(759);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'n') ADVANCE(750);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(753);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'h') ADVANCE(764);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'k') ADVANCE(495);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'n') ADVANCE(750);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(765);
      if (lookahead == 'n') ADVANCE(750);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'n') ADVANCE(750);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'n') ADVANCE(750);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'r') ADVANCE(762);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead == 'y') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(755);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(758);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'o') ADVANCE(761);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(758);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'm') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'a') ADVANCE(771);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(784);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'c') ADVANCE(795);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(785);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 's') ADVANCE(777);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(785);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'u') ADVANCE(802);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(785);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(783);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(773);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'n') ADVANCE(772);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'o') ADVANCE(441);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(778);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'h') ADVANCE(798);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'k') ADVANCE(496);
      if (lookahead == 'l') ADVANCE(773);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'n') ADVANCE(772);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(773);
      if (lookahead == 'm') ADVANCE(799);
      if (lookahead == 'n') ADVANCE(772);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(773);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'n') ADVANCE(772);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(773);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'n') ADVANCE(772);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(1458);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(774);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'o') ADVANCE(441);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'o') ADVANCE(770);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'o') ADVANCE(793);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'o') ADVANCE(787);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'r') ADVANCE(796);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'r') ADVANCE(789);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead == 'y') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(781);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(784);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'o') ADVANCE(794);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(784);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(776);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'r') ADVANCE(791);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(779);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1388);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == 'e') ADVANCE(884);
      if (lookahead == 'i') ADVANCE(879);
      if (lookahead == 'l') ADVANCE(874);
      if (lookahead == 'm') ADVANCE(875);
      if (lookahead == 'p') ADVANCE(873);
      if (lookahead == 'w') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1408);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == 'e') ADVANCE(906);
      if (lookahead == 'i') ADVANCE(900);
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead == 'm') ADVANCE(897);
      if (lookahead == 'p') ADVANCE(895);
      if (lookahead == 'w') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1427);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == '/') ADVANCE(913);
      if (lookahead == 'd') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(919);
      if (lookahead == 'l') ADVANCE(915);
      if (lookahead == 'm') ADVANCE(916);
      if (lookahead == 'p') ADVANCE(914);
      if (lookahead == 'w') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '*') ADVANCE(763);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'd') ADVANCE(270);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'n') ADVANCE(807);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'f') ADVANCE(361);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'f') ADVANCE(361);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(810);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'h') ADVANCE(821);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'k') ADVANCE(497);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'n') ADVANCE(807);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(822);
      if (lookahead == 'n') ADVANCE(807);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'n') ADVANCE(807);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'n') ADVANCE(807);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'r') ADVANCE(819);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead == 'y') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'i') ADVANCE(812);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'o') ADVANCE(818);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(820);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"') ADVANCE(1366);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == '-') ADVANCE(946);
      if (lookahead == '/') ADVANCE(945);
      if (lookahead == 'b') ADVANCE(970);
      if (lookahead == 'd') ADVANCE(971);
      if (lookahead == 'e') ADVANCE(964);
      if (lookahead == 'i') ADVANCE(959);
      if (lookahead == 'l') ADVANCE(953);
      if (lookahead == 'm') ADVANCE(954);
      if (lookahead == 'p') ADVANCE(952);
      if (lookahead == 'w') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(866);
      if (lookahead == '/') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == '/') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == '>') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'e') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'c') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'c') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'c') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'd') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'd') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'e') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'e') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'e') ADVANCE(838);
      if (lookahead == 'r') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'f') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'h') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'i') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'k') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'l') ADVANCE(862);
      if (lookahead == 'n') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'l') ADVANCE(1459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'l') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'l') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'm') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'o') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'o') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'o') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'o') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'r') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'r') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'r') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 's') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'u') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == 'y') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(869);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == 'i') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(986);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(869);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == 'i') ADVANCE(868);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(869);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(869);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == 'i') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(869);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'e') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'e') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'e') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'h') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'i') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'k') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'l') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'l') ADVANCE(888);
      if (lookahead == 'n') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'm') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'r') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 's') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == 'y') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == '/') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'e') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'e') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'e') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'e') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'f') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'h') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'k') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'l') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'm') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'n') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'o') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'r') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead == 'y') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(911);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'e') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'e') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'e') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'e') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'f') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'h') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'i') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'k') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'l') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'm') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'o') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'r') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 't') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead == 'y') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(930);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(931);
      if (lookahead == '/') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(935);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(931);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(935);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(931);
      if (lookahead == '/') ADVANCE(932);
      if (lookahead == 'i') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(935);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(931);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(935);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(935);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '/') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(939);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '/') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(939);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '/') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(939);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(939);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(941);
      if (lookahead == '/') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(987);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(941);
      if (lookahead == '/') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(941);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(891);
      if (lookahead == '/') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(911);
      if (lookahead == '/') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == '>') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'a') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'c') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'd') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'd') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'e') ADVANCE(955);
      if (lookahead == 'r') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'e') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'e') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'e') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'h') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'i') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'k') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'l') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'l') ADVANCE(976);
      if (lookahead == 'n') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'l') ADVANCE(1460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'l') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'm') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'o') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'o') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'o') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'o') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'o') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'r') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'r') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 's') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'u') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead == 'y') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(930);
      if (lookahead == '/') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(935);
      if (lookahead == '/') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(939);
      if (lookahead == '/') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '*') ADVANCE(980);
      if (lookahead == '/') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == 'i') ADVANCE(985);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(986);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == 'i') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(986);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(987);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '>') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(991);
      if (lookahead == 'e') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(999);
      if (lookahead == 'r') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(382);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(1028);
      if (lookahead == 'n') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(1028);
      if (lookahead == 'n') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(1471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == '>') ADVANCE(299);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'a') ADVANCE(1037);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1045);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'o') ADVANCE(1053);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'a') ADVANCE(1037);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1045);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'c') ADVANCE(1054);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'f') ADVANCE(367);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'f') ADVANCE(367);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1063);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'h') ADVANCE(1057);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'k') ADVANCE(503);
      if (lookahead == 'l') ADVANCE(1058);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'n') ADVANCE(1038);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1058);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'n') ADVANCE(1038);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1058);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'n') ADVANCE(1038);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1058);
      if (lookahead == 'm') ADVANCE(1034);
      if (lookahead == 'n') ADVANCE(1038);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1465);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1059);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'o') ADVANCE(1036);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'o') ADVANCE(1052);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'o') ADVANCE(1046);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'r') ADVANCE(1055);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'r') ADVANCE(1049);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead == 'y') ADVANCE(245);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1040);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1043);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 's') ADVANCE(1062);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1043);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'u') ADVANCE(1066);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1043);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1042);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1058);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'n') ADVANCE(1038);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1061);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'r') ADVANCE(1050);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1064);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == '>') ADVANCE(300);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'a') ADVANCE(1071);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1079);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'o') ADVANCE(1087);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'a') ADVANCE(1071);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1079);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'c') ADVANCE(223);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'c') ADVANCE(1088);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'f') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'n') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'f') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1097);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'n') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'h') ADVANCE(1091);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'k') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'n') ADVANCE(1072);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'n') ADVANCE(1072);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'n') ADVANCE(1072);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead == 'm') ADVANCE(1068);
      if (lookahead == 'n') ADVANCE(1072);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1466);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'o') ADVANCE(1070);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'o') ADVANCE(1086);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'o') ADVANCE(1080);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'r') ADVANCE(1089);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'r') ADVANCE(1083);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead == 'y') ADVANCE(246);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1074);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1077);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 's') ADVANCE(1096);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1077);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'u') ADVANCE(1100);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1077);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1076);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'n') ADVANCE(1072);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1095);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'r') ADVANCE(1084);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1118);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'h') ADVANCE(1113);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'k') ADVANCE(505);
      if (lookahead == 'l') ADVANCE(1114);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'n') ADVANCE(1102);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1114);
      if (lookahead == 'm') ADVANCE(1119);
      if (lookahead == 'n') ADVANCE(1102);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1114);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'n') ADVANCE(1102);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 't') ADVANCE(473);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1114);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'n') ADVANCE(1102);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'r') ADVANCE(1111);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead == 'y') ADVANCE(247);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1104);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1108);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 's') ADVANCE(1117);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1108);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1106);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1114);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'n') ADVANCE(1102);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1107);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'o') ADVANCE(1110);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1107);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1116);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'f') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'f') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1138);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'h') ADVANCE(1133);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'k') ADVANCE(506);
      if (lookahead == 'l') ADVANCE(1134);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'n') ADVANCE(1122);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1134);
      if (lookahead == 'm') ADVANCE(1139);
      if (lookahead == 'n') ADVANCE(1122);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1134);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'n') ADVANCE(1122);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1134);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'n') ADVANCE(1122);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'r') ADVANCE(1131);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead == 'y') ADVANCE(248);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1128);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 's') ADVANCE(1137);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1128);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1126);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1134);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'n') ADVANCE(1122);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1127);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'o') ADVANCE(1130);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1127);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(1136);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(1132);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'e') ADVANCE(1156);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'e') ADVANCE(1152);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'e') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'o') ADVANCE(1155);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'e') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'e') ADVANCE(1144);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'f') ADVANCE(371);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'f') ADVANCE(371);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'h') ADVANCE(1159);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'k') ADVANCE(507);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1146);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'r') ADVANCE(1157);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead == 'y') ADVANCE(249);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(1158);
      if (lookahead == '/') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'i') ADVANCE(1150);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == 'w') ADVANCE(1151);
      if (lookahead != 0) ADVANCE(1158);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'e') ADVANCE(1173);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'e') ADVANCE(1169);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'e') ADVANCE(1170);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'o') ADVANCE(1172);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'e') ADVANCE(1170);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'e') ADVANCE(1161);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'f') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'f') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1162);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'h') ADVANCE(1176);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'k') ADVANCE(508);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1163);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'r') ADVANCE(1174);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead == 'y') ADVANCE(250);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1175);
      if (lookahead == '*') ADVANCE(1175);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1167);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1168);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == '>') ADVANCE(301);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'a') ADVANCE(1181);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1196);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'c') ADVANCE(1205);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1194);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 's') ADVANCE(1187);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1194);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'u') ADVANCE(1212);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1194);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1193);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1183);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'n') ADVANCE(1182);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'f') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'f') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'h') ADVANCE(1208);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'k') ADVANCE(509);
      if (lookahead == 'l') ADVANCE(1183);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'n') ADVANCE(1182);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1183);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'n') ADVANCE(1182);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1183);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'n') ADVANCE(1182);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1183);
      if (lookahead == 'm') ADVANCE(1209);
      if (lookahead == 'n') ADVANCE(1182);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1467);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1184);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'o') ADVANCE(1180);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'o') ADVANCE(1203);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'o') ADVANCE(1197);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'r') ADVANCE(1206);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'r') ADVANCE(1199);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead == 'y') ADVANCE(251);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1191);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1196);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'o') ADVANCE(1204);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1196);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1186);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'r') ADVANCE(1201);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1189);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == '>') ADVANCE(302);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'a') ADVANCE(1216);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'c') ADVANCE(1240);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1230);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 's') ADVANCE(1222);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1230);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'u') ADVANCE(1247);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1230);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1228);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1218);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'n') ADVANCE(1217);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'f') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'f') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1223);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'h') ADVANCE(1243);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'k') ADVANCE(510);
      if (lookahead == 'l') ADVANCE(1218);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'n') ADVANCE(1217);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1218);
      if (lookahead == 'm') ADVANCE(1244);
      if (lookahead == 'n') ADVANCE(1217);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1218);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'n') ADVANCE(1217);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1218);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'n') ADVANCE(1217);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1468);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1219);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'o') ADVANCE(347);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'o') ADVANCE(1215);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'o') ADVANCE(1238);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'o') ADVANCE(1232);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'r') ADVANCE(1241);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'r') ADVANCE(1234);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead == 'y') ADVANCE(252);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1226);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'o') ADVANCE(1239);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1221);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'r') ADVANCE(1236);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1224);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1258);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1256);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'n') ADVANCE(1249);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1252);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'h') ADVANCE(1263);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'k') ADVANCE(511);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'n') ADVANCE(1249);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1264);
      if (lookahead == 'n') ADVANCE(1249);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'n') ADVANCE(1249);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'n') ADVANCE(1249);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'r') ADVANCE(1261);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead == 'y') ADVANCE(253);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1254);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1257);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'o') ADVANCE(1260);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1257);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '/') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1251);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead == 'w') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1276);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1274);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'n') ADVANCE(1267);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'f') ADVANCE(376);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'f') ADVANCE(376);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1270);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'h') ADVANCE(1281);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'k') ADVANCE(512);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'n') ADVANCE(1267);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1282);
      if (lookahead == 'n') ADVANCE(1267);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'n') ADVANCE(1267);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 't') ADVANCE(480);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'n') ADVANCE(1267);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'r') ADVANCE(1279);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead == 'y') ADVANCE(254);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1272);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1275);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'o') ADVANCE(1278);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1275);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead == '*') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1269);
      if (lookahead == 'i') ADVANCE(1271);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1284);
      if (lookahead == 'w') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1280);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == '/') ADVANCE(1325);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'a') ADVANCE(1290);
      if (lookahead == 'e') ADVANCE(1309);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'a') ADVANCE(1292);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'c') ADVANCE(1318);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'c') ADVANCE(1319);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'd') ADVANCE(1299);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'e') ADVANCE(1321);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'e') ADVANCE(1304);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'e') ADVANCE(1296);
      if (lookahead == 'r') ADVANCE(1314);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'f') ADVANCE(377);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'h') ADVANCE(1303);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'i') ADVANCE(1308);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'k') ADVANCE(513);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'l') ADVANCE(1320);
      if (lookahead == 'n') ADVANCE(1293);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'l') ADVANCE(1469);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'l') ADVANCE(1322);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'l') ADVANCE(1298);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'm') ADVANCE(1315);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'o') ADVANCE(1306);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'o') ADVANCE(1291);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'o') ADVANCE(1317);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'o') ADVANCE(1311);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'r') ADVANCE(1323);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'r') ADVANCE(1312);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'r') ADVANCE(1313);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 's') ADVANCE(1297);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'u') ADVANCE(1294);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == 'y') ADVANCE(255);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == '-') ADVANCE(1287);
      if (lookahead == '/') ADVANCE(1286);
      if (lookahead == 'b') ADVANCE(1316);
      if (lookahead == 'd') ADVANCE(1310);
      if (lookahead == 'e') ADVANCE(1305);
      if (lookahead == 'i') ADVANCE(1301);
      if (lookahead == 'l') ADVANCE(1295);
      if (lookahead == 'm') ADVANCE(1288);
      if (lookahead == 'p') ADVANCE(1300);
      if (lookahead == 'w') ADVANCE(1302);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead == '"') ADVANCE(1388);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == '/') ADVANCE(1368);
      if (lookahead == 'e') ADVANCE(1380);
      if (lookahead == 'i') ADVANCE(1376);
      if (lookahead == 'l') ADVANCE(1370);
      if (lookahead == 'm') ADVANCE(1371);
      if (lookahead == 'p') ADVANCE(1375);
      if (lookahead == 'w') ADVANCE(1377);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead == '"') ADVANCE(1427);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == '/') ADVANCE(1410);
      if (lookahead == 'd') ADVANCE(1422);
      if (lookahead == 'i') ADVANCE(1416);
      if (lookahead == 'l') ADVANCE(1412);
      if (lookahead == 'm') ADVANCE(1413);
      if (lookahead == 'p') ADVANCE(1411);
      if (lookahead == 'w') ADVANCE(1417);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1366);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == '-') ADVANCE(1332);
      if (lookahead == '/') ADVANCE(1331);
      if (lookahead == 'b') ADVANCE(1359);
      if (lookahead == 'd') ADVANCE(1354);
      if (lookahead == 'e') ADVANCE(1349);
      if (lookahead == 'i') ADVANCE(1345);
      if (lookahead == 'l') ADVANCE(1338);
      if (lookahead == 'm') ADVANCE(1339);
      if (lookahead == 'p') ADVANCE(1344);
      if (lookahead == 'w') ADVANCE(1346);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead == '"') ADVANCE(1408);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == '/') ADVANCE(1390);
      if (lookahead == 'e') ADVANCE(1403);
      if (lookahead == 'i') ADVANCE(1397);
      if (lookahead == 'l') ADVANCE(1393);
      if (lookahead == 'm') ADVANCE(1394);
      if (lookahead == 'p') ADVANCE(1392);
      if (lookahead == 'w') ADVANCE(1398);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == '/') ADVANCE(1328);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'a') ADVANCE(1335);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'c') ADVANCE(1361);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'd') ADVANCE(1343);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'e') ADVANCE(1363);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'e') ADVANCE(1353);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'e') ADVANCE(1348);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'e') ADVANCE(1340);
      if (lookahead == 'r') ADVANCE(1357);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'h') ADVANCE(1347);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'i') ADVANCE(1352);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'k') ADVANCE(514);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'l') ADVANCE(1362);
      if (lookahead == 'n') ADVANCE(1336);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'l') ADVANCE(1470);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'l') ADVANCE(1364);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'l') ADVANCE(1342);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'm') ADVANCE(1358);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'o') ADVANCE(1350);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'o') ADVANCE(1334);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'o') ADVANCE(1360);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'o') ADVANCE(1355);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'r') ADVANCE(1365);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'r') ADVANCE(1356);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 's') ADVANCE(1341);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 't') ADVANCE(482);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'u') ADVANCE(1337);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead == 'y') ADVANCE(256);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == '/') ADVANCE(1326);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == '/') ADVANCE(1132);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'e') ADVANCE(1386);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'e') ADVANCE(1382);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'e') ADVANCE(1379);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'e') ADVANCE(1372);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'f') ADVANCE(379);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'h') ADVANCE(1378);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'i') ADVANCE(1381);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'k') ADVANCE(515);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'l') ADVANCE(1385);
      if (lookahead == 'n') ADVANCE(1369);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'l') ADVANCE(1374);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'm') ADVANCE(1383);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'o') ADVANCE(1384);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'r') ADVANCE(1387);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 's') ADVANCE(1373);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 't') ADVANCE(483);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead == 'y') ADVANCE(257);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '*') ADVANCE(1367);
      if (lookahead != 0) ADVANCE(1388);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == '/') ADVANCE(1329);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == '/') ADVANCE(1280);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'e') ADVANCE(1395);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'e') ADVANCE(1406);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'e') ADVANCE(1402);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'e') ADVANCE(1400);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'h') ADVANCE(1399);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'i') ADVANCE(1401);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'k') ADVANCE(516);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'l') ADVANCE(1396);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'm') ADVANCE(1404);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'n') ADVANCE(1391);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'o') ADVANCE(1405);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'r') ADVANCE(1407);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead == 'y') ADVANCE(258);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '*') ADVANCE(1389);
      if (lookahead != 0) ADVANCE(1408);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == '/') ADVANCE(1327);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'e') ADVANCE(1414);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'e') ADVANCE(1425);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'e') ADVANCE(1421);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'e') ADVANCE(1419);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'f') ADVANCE(381);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'h') ADVANCE(1418);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'i') ADVANCE(1420);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'k') ADVANCE(517);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'l') ADVANCE(1415);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'm') ADVANCE(1423);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'o') ADVANCE(1424);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'r') ADVANCE(1426);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead == 'y') ADVANCE(259);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1409);
      if (lookahead != 0) ADVANCE(1427);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '"') ADVANCE(1431);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '"') ADVANCE(1432);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*') ADVANCE(145);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '*') ADVANCE(138);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '"') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(592);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(666);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(666);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(744);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(797);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(785);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == 'w') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(866);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '*') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(980);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1056);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1032);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(1043);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == 'w') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(1056);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '"') ADVANCE(1090);
      if (lookahead == '*') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'e') ADVANCE(1077);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'w') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1177);
      if (lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1194);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1192);
      if (lookahead != 0) ADVANCE(1207);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(1242);
      if (lookahead == '*') ADVANCE(1242);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(1242);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'd') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1230);
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1242);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1324);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(1330);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1428);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 189},
  [2] = {.lex_state = 109},
  [3] = {.lex_state = 109},
  [4] = {.lex_state = 109},
  [5] = {.lex_state = 110},
  [6] = {.lex_state = 110},
  [7] = {.lex_state = 110},
  [8] = {.lex_state = 130},
  [9] = {.lex_state = 130},
  [10] = {.lex_state = 130},
  [11] = {.lex_state = 130},
  [12] = {.lex_state = 130},
  [13] = {.lex_state = 130},
  [14] = {.lex_state = 130},
  [15] = {.lex_state = 110},
  [16] = {.lex_state = 130},
  [17] = {.lex_state = 130},
  [18] = {.lex_state = 130},
  [19] = {.lex_state = 109},
  [20] = {.lex_state = 130},
  [21] = {.lex_state = 130},
  [22] = {.lex_state = 113},
  [23] = {.lex_state = 130},
  [24] = {.lex_state = 130},
  [25] = {.lex_state = 130},
  [26] = {.lex_state = 130},
  [27] = {.lex_state = 130},
  [28] = {.lex_state = 110},
  [29] = {.lex_state = 130},
  [30] = {.lex_state = 113},
  [31] = {.lex_state = 113},
  [32] = {.lex_state = 109},
  [33] = {.lex_state = 110},
  [34] = {.lex_state = 130},
  [35] = {.lex_state = 130},
  [36] = {.lex_state = 130},
  [37] = {.lex_state = 110},
  [38] = {.lex_state = 130},
  [39] = {.lex_state = 113},
  [40] = {.lex_state = 130},
  [41] = {.lex_state = 130},
  [42] = {.lex_state = 113},
  [43] = {.lex_state = 130},
  [44] = {.lex_state = 130},
  [45] = {.lex_state = 130},
  [46] = {.lex_state = 110},
  [47] = {.lex_state = 110},
  [48] = {.lex_state = 110},
  [49] = {.lex_state = 110},
  [50] = {.lex_state = 110},
  [51] = {.lex_state = 110},
  [52] = {.lex_state = 110},
  [53] = {.lex_state = 110},
  [54] = {.lex_state = 110},
  [55] = {.lex_state = 110},
  [56] = {.lex_state = 110},
  [57] = {.lex_state = 130},
  [58] = {.lex_state = 130},
  [59] = {.lex_state = 189},
  [60] = {.lex_state = 130},
  [61] = {.lex_state = 130},
  [62] = {.lex_state = 130},
  [63] = {.lex_state = 113},
  [64] = {.lex_state = 130},
  [65] = {.lex_state = 130},
  [66] = {.lex_state = 130},
  [67] = {.lex_state = 189},
  [68] = {.lex_state = 130},
  [69] = {.lex_state = 130},
  [70] = {.lex_state = 130},
  [71] = {.lex_state = 113},
  [72] = {.lex_state = 130},
  [73] = {.lex_state = 130},
  [74] = {.lex_state = 113},
  [75] = {.lex_state = 130},
  [76] = {.lex_state = 130},
  [77] = {.lex_state = 130},
  [78] = {.lex_state = 130},
  [79] = {.lex_state = 130},
  [80] = {.lex_state = 113},
  [81] = {.lex_state = 113},
  [82] = {.lex_state = 113},
  [83] = {.lex_state = 113},
  [84] = {.lex_state = 113},
  [85] = {.lex_state = 113},
  [86] = {.lex_state = 113},
  [87] = {.lex_state = 113},
  [88] = {.lex_state = 116},
  [89] = {.lex_state = 118},
  [90] = {.lex_state = 118},
  [91] = {.lex_state = 116},
  [92] = {.lex_state = 118},
  [93] = {.lex_state = 116},
  [94] = {.lex_state = 189},
  [95] = {.lex_state = 189},
  [96] = {.lex_state = 189},
  [97] = {.lex_state = 189},
  [98] = {.lex_state = 189},
  [99] = {.lex_state = 189},
  [100] = {.lex_state = 120},
  [101] = {.lex_state = 120},
  [102] = {.lex_state = 120},
  [103] = {.lex_state = 120},
  [104] = {.lex_state = 118},
  [105] = {.lex_state = 120},
  [106] = {.lex_state = 120},
  [107] = {.lex_state = 116},
  [108] = {.lex_state = 118},
  [109] = {.lex_state = 120},
  [110] = {.lex_state = 118},
  [111] = {.lex_state = 120},
  [112] = {.lex_state = 120},
  [113] = {.lex_state = 120},
  [114] = {.lex_state = 120},
  [115] = {.lex_state = 120},
  [116] = {.lex_state = 120},
  [117] = {.lex_state = 121},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 122},
  [120] = {.lex_state = 121},
  [121] = {.lex_state = 124},
  [122] = {.lex_state = 121},
  [123] = {.lex_state = 122},
  [124] = {.lex_state = 121},
  [125] = {.lex_state = 122},
  [126] = {.lex_state = 121},
  [127] = {.lex_state = 121},
  [128] = {.lex_state = 121},
  [129] = {.lex_state = 121},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_proc] = ACTIONS(1),
    [anon_sym_memory] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_endmacro] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_peek] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(118),
    [sym_include_statement] = STATE(59),
    [sym_proc_definition] = STATE(59),
    [sym_macro_definition] = STATE(59),
    [aux_sym_source_file_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_include] = ACTIONS(5),
    [anon_sym_proc] = ACTIONS(7),
    [anon_sym_macro] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      anon_sym_endmacro,
    STATE(19), 1,
      sym_intrinsic_type,
    ACTIONS(15), 2,
      anon_sym_int,
      anon_sym_bool,
    STATE(3), 2,
      sym_expandable,
      aux_sym_macro_definition_repeat1,
    ACTIONS(11), 14,
      anon_sym_include,
      anon_sym_proc,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_DASH_GT,
      anon_sym_in,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [31] = 5,
    ACTIONS(20), 1,
      anon_sym_endmacro,
    STATE(19), 1,
      sym_intrinsic_type,
    ACTIONS(22), 2,
      anon_sym_int,
      anon_sym_bool,
    STATE(3), 2,
      sym_expandable,
      aux_sym_macro_definition_repeat1,
    ACTIONS(17), 14,
      anon_sym_include,
      anon_sym_proc,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_DASH_GT,
      anon_sym_in,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [62] = 5,
    ACTIONS(25), 1,
      anon_sym_endmacro,
    STATE(19), 1,
      sym_intrinsic_type,
    ACTIONS(15), 2,
      anon_sym_int,
      anon_sym_bool,
    STATE(2), 2,
      sym_expandable,
      aux_sym_macro_definition_repeat1,
    ACTIONS(11), 14,
      anon_sym_include,
      anon_sym_proc,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_DASH_GT,
      anon_sym_in,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [93] = 12,
    ACTIONS(27), 1,
      anon_sym_memory,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_while,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_peek,
    STATE(8), 1,
      sym_else_code_block,
    STATE(55), 1,
      sym_code_block,
    ACTIONS(41), 2,
      sym_name,
      sym_string_literal,
    STATE(28), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(56), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [137] = 12,
    ACTIONS(27), 1,
      anon_sym_memory,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_while,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_peek,
    ACTIONS(43), 1,
      anon_sym_end,
    STATE(38), 1,
      sym_else_code_block,
    STATE(77), 1,
      sym_code_block,
    ACTIONS(41), 2,
      sym_name,
      sym_string_literal,
    STATE(37), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(56), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [181] = 12,
    ACTIONS(27), 1,
      anon_sym_memory,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_while,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_peek,
    ACTIONS(45), 1,
      anon_sym_end,
    STATE(17), 1,
      sym_else_code_block,
    STATE(81), 1,
      sym_code_block,
    ACTIONS(41), 2,
      sym_name,
      sym_string_literal,
    STATE(15), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(56), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [225] = 10,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(53), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(45), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [263] = 10,
    ACTIONS(43), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(60), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(43), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [301] = 10,
    ACTIONS(45), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(63), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(40), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [339] = 10,
    ACTIONS(45), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(71), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(40), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [377] = 10,
    ACTIONS(45), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(87), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(40), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [415] = 10,
    ACTIONS(45), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(86), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(40), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [453] = 10,
    ACTIONS(45), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(85), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(40), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [491] = 10,
    ACTIONS(27), 1,
      anon_sym_memory,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_while,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_peek,
    ACTIONS(59), 1,
      anon_sym_end,
    ACTIONS(61), 1,
      anon_sym_else,
    ACTIONS(41), 2,
      sym_name,
      sym_string_literal,
    STATE(33), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(56), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [529] = 10,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    ACTIONS(63), 1,
      anon_sym_end,
    STATE(98), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(44), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [567] = 10,
    ACTIONS(45), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(84), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(40), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [605] = 10,
    ACTIONS(43), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(61), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(43), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [643] = 1,
    ACTIONS(65), 17,
      anon_sym_include,
      anon_sym_proc,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_DASH_GT,
      anon_sym_in,
      anon_sym_endmacro,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
      anon_sym_int,
      anon_sym_bool,
  [663] = 10,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(48), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(45), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [701] = 10,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(46), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(45), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [739] = 10,
    ACTIONS(67), 1,
      anon_sym_memory,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_do,
    ACTIONS(75), 1,
      anon_sym_let,
    ACTIONS(77), 1,
      anon_sym_peek,
    STATE(36), 1,
      sym_do_code_block,
    ACTIONS(79), 2,
      sym_name,
      sym_string_literal,
    STATE(39), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(80), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [777] = 10,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(47), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(45), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [815] = 10,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(50), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(45), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [853] = 10,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(51), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(45), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [891] = 10,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(52), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(45), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [929] = 10,
    ACTIONS(43), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(57), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(43), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [967] = 10,
    ACTIONS(27), 1,
      anon_sym_memory,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_while,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_peek,
    ACTIONS(61), 1,
      anon_sym_else,
    ACTIONS(81), 1,
      anon_sym_end,
    ACTIONS(41), 2,
      sym_name,
      sym_string_literal,
    STATE(33), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(56), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1005] = 10,
    ACTIONS(43), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(62), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(43), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1043] = 10,
    ACTIONS(67), 1,
      anon_sym_memory,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_do,
    ACTIONS(75), 1,
      anon_sym_let,
    ACTIONS(77), 1,
      anon_sym_peek,
    STATE(26), 1,
      sym_do_code_block,
    ACTIONS(79), 2,
      sym_name,
      sym_string_literal,
    STATE(39), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(80), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1081] = 10,
    ACTIONS(67), 1,
      anon_sym_memory,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_do,
    ACTIONS(75), 1,
      anon_sym_let,
    ACTIONS(77), 1,
      anon_sym_peek,
    STATE(14), 1,
      sym_do_code_block,
    ACTIONS(79), 2,
      sym_name,
      sym_string_literal,
    STATE(39), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(80), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1119] = 1,
    ACTIONS(83), 17,
      anon_sym_include,
      anon_sym_proc,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_DASH_GT,
      anon_sym_in,
      anon_sym_endmacro,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
      anon_sym_int,
      anon_sym_bool,
  [1139] = 9,
    ACTIONS(85), 1,
      anon_sym_memory,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_while,
    ACTIONS(96), 1,
      anon_sym_let,
    ACTIONS(99), 1,
      anon_sym_peek,
    ACTIONS(88), 2,
      anon_sym_end,
      anon_sym_else,
    ACTIONS(102), 2,
      sym_name,
      sym_string_literal,
    STATE(33), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(56), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1175] = 10,
    ACTIONS(45), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(74), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(40), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1213] = 10,
    ACTIONS(43), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(78), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(43), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1251] = 10,
    ACTIONS(43), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(66), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(43), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1289] = 10,
    ACTIONS(27), 1,
      anon_sym_memory,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_while,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_peek,
    ACTIONS(61), 1,
      anon_sym_else,
    ACTIONS(105), 1,
      anon_sym_end,
    ACTIONS(41), 2,
      sym_name,
      sym_string_literal,
    STATE(33), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(56), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1327] = 10,
    ACTIONS(43), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    STATE(70), 1,
      sym_code_block,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(43), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1365] = 9,
    ACTIONS(67), 1,
      anon_sym_memory,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(75), 1,
      anon_sym_let,
    ACTIONS(77), 1,
      anon_sym_peek,
    ACTIONS(107), 1,
      anon_sym_do,
    ACTIONS(79), 2,
      sym_name,
      sym_string_literal,
    STATE(42), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(80), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1400] = 9,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    ACTIONS(59), 1,
      anon_sym_end,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(41), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1435] = 9,
    ACTIONS(88), 1,
      anon_sym_end,
    ACTIONS(109), 1,
      anon_sym_memory,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(115), 1,
      anon_sym_while,
    ACTIONS(118), 1,
      anon_sym_let,
    ACTIONS(121), 1,
      anon_sym_peek,
    ACTIONS(124), 2,
      sym_name,
      sym_string_literal,
    STATE(41), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1470] = 9,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(127), 1,
      anon_sym_memory,
    ACTIONS(130), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_while,
    ACTIONS(136), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_peek,
    ACTIONS(142), 2,
      sym_name,
      sym_string_literal,
    STATE(42), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(80), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1505] = 9,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    ACTIONS(105), 1,
      anon_sym_end,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(41), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1540] = 9,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    ACTIONS(145), 1,
      anon_sym_end,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(41), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1575] = 9,
    ACTIONS(47), 1,
      anon_sym_memory,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_peek,
    ACTIONS(81), 1,
      anon_sym_end,
    ACTIONS(57), 2,
      sym_name,
      sym_string_literal,
    STATE(41), 2,
      sym_callable,
      aux_sym_code_block_repeat1,
    STATE(73), 6,
      sym_local_allocation,
      sym_if_else_statement,
      sym_if_statement,
      sym_let_statement,
      sym_peek_statement,
      sym_while_do_statement,
  [1610] = 1,
    ACTIONS(147), 9,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1622] = 1,
    ACTIONS(149), 9,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1634] = 1,
    ACTIONS(151), 9,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1646] = 1,
    ACTIONS(153), 9,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1658] = 1,
    ACTIONS(155), 9,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1670] = 1,
    ACTIONS(157), 9,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1682] = 1,
    ACTIONS(159), 9,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1694] = 1,
    ACTIONS(161), 9,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1706] = 1,
    ACTIONS(163), 9,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1718] = 1,
    ACTIONS(165), 9,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1730] = 1,
    ACTIONS(167), 9,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1742] = 1,
    ACTIONS(151), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1753] = 1,
    ACTIONS(169), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1764] = 5,
    ACTIONS(5), 1,
      anon_sym_include,
    ACTIONS(7), 1,
      anon_sym_proc,
    ACTIONS(9), 1,
      anon_sym_macro,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(67), 4,
      sym_include_statement,
      sym_proc_definition,
      sym_macro_definition,
      aux_sym_source_file_repeat1,
  [1783] = 1,
    ACTIONS(155), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1794] = 1,
    ACTIONS(149), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1805] = 1,
    ACTIONS(147), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1816] = 1,
    ACTIONS(147), 8,
      anon_sym_memory,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1827] = 1,
    ACTIONS(173), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1838] = 1,
    ACTIONS(153), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1849] = 1,
    ACTIONS(159), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1860] = 5,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 1,
      anon_sym_include,
    ACTIONS(180), 1,
      anon_sym_proc,
    ACTIONS(183), 1,
      anon_sym_macro,
    STATE(67), 4,
      sym_include_statement,
      sym_proc_definition,
      sym_macro_definition,
      aux_sym_source_file_repeat1,
  [1879] = 1,
    ACTIONS(186), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1890] = 1,
    ACTIONS(163), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1901] = 1,
    ACTIONS(161), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1912] = 1,
    ACTIONS(149), 8,
      anon_sym_memory,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1923] = 1,
    ACTIONS(188), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1934] = 1,
    ACTIONS(167), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1945] = 1,
    ACTIONS(151), 8,
      anon_sym_memory,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1956] = 1,
    ACTIONS(190), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1967] = 1,
    ACTIONS(192), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1978] = 1,
    ACTIONS(165), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [1989] = 1,
    ACTIONS(157), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [2000] = 1,
    ACTIONS(194), 8,
      anon_sym_memory,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [2011] = 1,
    ACTIONS(167), 8,
      anon_sym_memory,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [2022] = 1,
    ACTIONS(165), 8,
      anon_sym_memory,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [2033] = 1,
    ACTIONS(163), 8,
      anon_sym_memory,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [2044] = 1,
    ACTIONS(153), 8,
      anon_sym_memory,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [2055] = 1,
    ACTIONS(161), 8,
      anon_sym_memory,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [2066] = 1,
    ACTIONS(159), 8,
      anon_sym_memory,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [2077] = 1,
    ACTIONS(157), 8,
      anon_sym_memory,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [2088] = 1,
    ACTIONS(155), 8,
      anon_sym_memory,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_let,
      anon_sym_peek,
      sym_name,
      sym_string_literal,
  [2099] = 5,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(16), 1,
      sym_procedure_signature,
    STATE(89), 1,
      sym_argument_signature,
    ACTIONS(198), 2,
      anon_sym_int,
      anon_sym_bool,
    STATE(93), 2,
      sym_intrinsic_type,
      aux_sym_argument_signature_repeat1,
  [2117] = 4,
    ACTIONS(200), 1,
      anon_sym_in,
    STATE(75), 1,
      sym_return_signature,
    ACTIONS(202), 2,
      anon_sym_int,
      anon_sym_bool,
    STATE(90), 2,
      sym_intrinsic_type,
      aux_sym_argument_signature_repeat1,
  [2132] = 3,
    ACTIONS(204), 1,
      anon_sym_in,
    ACTIONS(202), 2,
      anon_sym_int,
      anon_sym_bool,
    STATE(92), 2,
      sym_intrinsic_type,
      aux_sym_argument_signature_repeat1,
  [2144] = 3,
    ACTIONS(206), 1,
      anon_sym_DASH_GT,
    ACTIONS(208), 2,
      anon_sym_int,
      anon_sym_bool,
    STATE(91), 2,
      sym_intrinsic_type,
      aux_sym_argument_signature_repeat1,
  [2156] = 3,
    ACTIONS(206), 1,
      anon_sym_in,
    ACTIONS(211), 2,
      anon_sym_int,
      anon_sym_bool,
    STATE(92), 2,
      sym_intrinsic_type,
      aux_sym_argument_signature_repeat1,
  [2168] = 3,
    ACTIONS(214), 1,
      anon_sym_DASH_GT,
    ACTIONS(198), 2,
      anon_sym_int,
      anon_sym_bool,
    STATE(91), 2,
      sym_intrinsic_type,
      aux_sym_argument_signature_repeat1,
  [2180] = 2,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 3,
      anon_sym_include,
      anon_sym_proc,
      anon_sym_macro,
  [2189] = 2,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 3,
      anon_sym_include,
      anon_sym_proc,
      anon_sym_macro,
  [2198] = 2,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 3,
      anon_sym_include,
      anon_sym_proc,
      anon_sym_macro,
  [2207] = 2,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 3,
      anon_sym_include,
      anon_sym_proc,
      anon_sym_macro,
  [2216] = 2,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 3,
      anon_sym_include,
      anon_sym_proc,
      anon_sym_macro,
  [2225] = 2,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 3,
      anon_sym_include,
      anon_sym_proc,
      anon_sym_macro,
  [2234] = 3,
    ACTIONS(236), 1,
      anon_sym_in,
    ACTIONS(238), 1,
      sym_name,
    STATE(113), 1,
      aux_sym_let_statement_repeat1,
  [2244] = 3,
    ACTIONS(240), 1,
      anon_sym_in,
    ACTIONS(242), 1,
      sym_name,
    STATE(114), 1,
      aux_sym_let_statement_repeat1,
  [2254] = 3,
    ACTIONS(244), 1,
      anon_sym_in,
    ACTIONS(246), 1,
      sym_name,
    STATE(106), 1,
      aux_sym_let_statement_repeat1,
  [2264] = 3,
    ACTIONS(238), 1,
      sym_name,
    ACTIONS(248), 1,
      anon_sym_in,
    STATE(113), 1,
      aux_sym_let_statement_repeat1,
  [2274] = 1,
    ACTIONS(250), 3,
      anon_sym_in,
      anon_sym_int,
      anon_sym_bool,
  [2280] = 3,
    ACTIONS(238), 1,
      sym_name,
    ACTIONS(252), 1,
      anon_sym_in,
    STATE(113), 1,
      aux_sym_let_statement_repeat1,
  [2290] = 3,
    ACTIONS(238), 1,
      sym_name,
    ACTIONS(254), 1,
      anon_sym_in,
    STATE(113), 1,
      aux_sym_let_statement_repeat1,
  [2300] = 1,
    ACTIONS(83), 3,
      anon_sym_DASH_GT,
      anon_sym_int,
      anon_sym_bool,
  [2306] = 1,
    ACTIONS(256), 3,
      anon_sym_in,
      anon_sym_int,
      anon_sym_bool,
  [2312] = 3,
    ACTIONS(238), 1,
      sym_name,
    ACTIONS(258), 1,
      anon_sym_in,
    STATE(113), 1,
      aux_sym_let_statement_repeat1,
  [2322] = 1,
    ACTIONS(83), 3,
      anon_sym_in,
      anon_sym_int,
      anon_sym_bool,
  [2328] = 3,
    ACTIONS(260), 1,
      anon_sym_in,
    ACTIONS(262), 1,
      sym_name,
    STATE(103), 1,
      aux_sym_let_statement_repeat1,
  [2338] = 3,
    ACTIONS(264), 1,
      anon_sym_in,
    ACTIONS(266), 1,
      sym_name,
    STATE(109), 1,
      aux_sym_let_statement_repeat1,
  [2348] = 3,
    ACTIONS(268), 1,
      anon_sym_in,
    ACTIONS(270), 1,
      sym_name,
    STATE(113), 1,
      aux_sym_let_statement_repeat1,
  [2358] = 3,
    ACTIONS(238), 1,
      sym_name,
    ACTIONS(273), 1,
      anon_sym_in,
    STATE(113), 1,
      aux_sym_let_statement_repeat1,
  [2368] = 3,
    ACTIONS(275), 1,
      anon_sym_in,
    ACTIONS(277), 1,
      sym_name,
    STATE(105), 1,
      aux_sym_let_statement_repeat1,
  [2378] = 3,
    ACTIONS(279), 1,
      anon_sym_in,
    ACTIONS(281), 1,
      sym_name,
    STATE(100), 1,
      aux_sym_let_statement_repeat1,
  [2388] = 1,
    ACTIONS(283), 1,
      sym_name,
  [2392] = 1,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [2396] = 1,
    ACTIONS(287), 1,
      anon_sym_in,
  [2400] = 1,
    ACTIONS(289), 1,
      sym_name,
  [2404] = 1,
    ACTIONS(291), 1,
      sym_string_literal,
  [2408] = 1,
    ACTIONS(293), 1,
      sym_name,
  [2412] = 1,
    ACTIONS(295), 1,
      anon_sym_in,
  [2416] = 1,
    ACTIONS(297), 1,
      sym_name,
  [2420] = 1,
    ACTIONS(299), 1,
      anon_sym_in,
  [2424] = 1,
    ACTIONS(301), 1,
      sym_name,
  [2428] = 1,
    ACTIONS(303), 1,
      sym_name,
  [2432] = 1,
    ACTIONS(305), 1,
      sym_name,
  [2436] = 1,
    ACTIONS(307), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 225,
  [SMALL_STATE(9)] = 263,
  [SMALL_STATE(10)] = 301,
  [SMALL_STATE(11)] = 339,
  [SMALL_STATE(12)] = 377,
  [SMALL_STATE(13)] = 415,
  [SMALL_STATE(14)] = 453,
  [SMALL_STATE(15)] = 491,
  [SMALL_STATE(16)] = 529,
  [SMALL_STATE(17)] = 567,
  [SMALL_STATE(18)] = 605,
  [SMALL_STATE(19)] = 643,
  [SMALL_STATE(20)] = 663,
  [SMALL_STATE(21)] = 701,
  [SMALL_STATE(22)] = 739,
  [SMALL_STATE(23)] = 777,
  [SMALL_STATE(24)] = 815,
  [SMALL_STATE(25)] = 853,
  [SMALL_STATE(26)] = 891,
  [SMALL_STATE(27)] = 929,
  [SMALL_STATE(28)] = 967,
  [SMALL_STATE(29)] = 1005,
  [SMALL_STATE(30)] = 1043,
  [SMALL_STATE(31)] = 1081,
  [SMALL_STATE(32)] = 1119,
  [SMALL_STATE(33)] = 1139,
  [SMALL_STATE(34)] = 1175,
  [SMALL_STATE(35)] = 1213,
  [SMALL_STATE(36)] = 1251,
  [SMALL_STATE(37)] = 1289,
  [SMALL_STATE(38)] = 1327,
  [SMALL_STATE(39)] = 1365,
  [SMALL_STATE(40)] = 1400,
  [SMALL_STATE(41)] = 1435,
  [SMALL_STATE(42)] = 1470,
  [SMALL_STATE(43)] = 1505,
  [SMALL_STATE(44)] = 1540,
  [SMALL_STATE(45)] = 1575,
  [SMALL_STATE(46)] = 1610,
  [SMALL_STATE(47)] = 1622,
  [SMALL_STATE(48)] = 1634,
  [SMALL_STATE(49)] = 1646,
  [SMALL_STATE(50)] = 1658,
  [SMALL_STATE(51)] = 1670,
  [SMALL_STATE(52)] = 1682,
  [SMALL_STATE(53)] = 1694,
  [SMALL_STATE(54)] = 1706,
  [SMALL_STATE(55)] = 1718,
  [SMALL_STATE(56)] = 1730,
  [SMALL_STATE(57)] = 1742,
  [SMALL_STATE(58)] = 1753,
  [SMALL_STATE(59)] = 1764,
  [SMALL_STATE(60)] = 1783,
  [SMALL_STATE(61)] = 1794,
  [SMALL_STATE(62)] = 1805,
  [SMALL_STATE(63)] = 1816,
  [SMALL_STATE(64)] = 1827,
  [SMALL_STATE(65)] = 1838,
  [SMALL_STATE(66)] = 1849,
  [SMALL_STATE(67)] = 1860,
  [SMALL_STATE(68)] = 1879,
  [SMALL_STATE(69)] = 1890,
  [SMALL_STATE(70)] = 1901,
  [SMALL_STATE(71)] = 1912,
  [SMALL_STATE(72)] = 1923,
  [SMALL_STATE(73)] = 1934,
  [SMALL_STATE(74)] = 1945,
  [SMALL_STATE(75)] = 1956,
  [SMALL_STATE(76)] = 1967,
  [SMALL_STATE(77)] = 1978,
  [SMALL_STATE(78)] = 1989,
  [SMALL_STATE(79)] = 2000,
  [SMALL_STATE(80)] = 2011,
  [SMALL_STATE(81)] = 2022,
  [SMALL_STATE(82)] = 2033,
  [SMALL_STATE(83)] = 2044,
  [SMALL_STATE(84)] = 2055,
  [SMALL_STATE(85)] = 2066,
  [SMALL_STATE(86)] = 2077,
  [SMALL_STATE(87)] = 2088,
  [SMALL_STATE(88)] = 2099,
  [SMALL_STATE(89)] = 2117,
  [SMALL_STATE(90)] = 2132,
  [SMALL_STATE(91)] = 2144,
  [SMALL_STATE(92)] = 2156,
  [SMALL_STATE(93)] = 2168,
  [SMALL_STATE(94)] = 2180,
  [SMALL_STATE(95)] = 2189,
  [SMALL_STATE(96)] = 2198,
  [SMALL_STATE(97)] = 2207,
  [SMALL_STATE(98)] = 2216,
  [SMALL_STATE(99)] = 2225,
  [SMALL_STATE(100)] = 2234,
  [SMALL_STATE(101)] = 2244,
  [SMALL_STATE(102)] = 2254,
  [SMALL_STATE(103)] = 2264,
  [SMALL_STATE(104)] = 2274,
  [SMALL_STATE(105)] = 2280,
  [SMALL_STATE(106)] = 2290,
  [SMALL_STATE(107)] = 2300,
  [SMALL_STATE(108)] = 2306,
  [SMALL_STATE(109)] = 2312,
  [SMALL_STATE(110)] = 2322,
  [SMALL_STATE(111)] = 2328,
  [SMALL_STATE(112)] = 2338,
  [SMALL_STATE(113)] = 2348,
  [SMALL_STATE(114)] = 2358,
  [SMALL_STATE(115)] = 2368,
  [SMALL_STATE(116)] = 2378,
  [SMALL_STATE(117)] = 2388,
  [SMALL_STATE(118)] = 2392,
  [SMALL_STATE(119)] = 2396,
  [SMALL_STATE(120)] = 2400,
  [SMALL_STATE(121)] = 2404,
  [SMALL_STATE(122)] = 2408,
  [SMALL_STATE(123)] = 2412,
  [SMALL_STATE(124)] = 2416,
  [SMALL_STATE(125)] = 2420,
  [SMALL_STATE(126)] = 2424,
  [SMALL_STATE(127)] = 2428,
  [SMALL_STATE(128)] = 2432,
  [SMALL_STATE(129)] = 2436,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_definition_repeat1, 2), SHIFT_REPEAT(19),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_definition_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_definition_repeat1, 2), SHIFT_REPEAT(32),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expandable, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intrinsic_type, 1),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(128),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(5),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(30),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(101),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(116),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(56),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(124),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(6),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(22),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(102),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(115),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(73),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(129),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(7),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(31),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(112),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(111),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(80),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_peek_statement, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_allocation, 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_peek_statement, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_do_statement, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_else_statement, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callable, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_signature, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_code_block, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_code_block, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_signature, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_signature, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_code_block, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_code_block, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_signature_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_signature_repeat1, 2), SHIFT_REPEAT(107),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_signature_repeat1, 2), SHIFT_REPEAT(110),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_definition, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_definition, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_signature, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_signature, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_statement_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_statement_repeat1, 2), SHIFT_REPEAT(113),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [285] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Corth(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
