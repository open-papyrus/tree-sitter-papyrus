#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  sym_identifier = 1,
  aux_sym_script_header_token1 = 2,
  aux_sym_script_header_token2 = 3,
  aux_sym_script_header_token3 = 4,
  aux_sym_script_header_token4 = 5,
  aux_sym_script_header_token5 = 6,
  aux_sym_script_header_token6 = 7,
  anon_sym_SEMI = 8,
  aux_sym_single_line_comment_token1 = 9,
  anon_sym_SEMI_SLASH = 10,
  aux_sym_multi_line_comment_token1 = 11,
  anon_sym_SLASH_SEMI = 12,
  anon_sym_LBRACE = 13,
  aux_sym_documentation_comment_token1 = 14,
  anon_sym_RBRACE = 15,
  anon_sym_COLON = 16,
  sym__terminator = 17,
  sym_script_file = 18,
  sym_script_header = 19,
  sym_single_line_comment = 20,
  sym_multi_line_comment = 21,
  sym_documentation_comment = 22,
  sym_namespaced_identifier = 23,
  sym__normal_or_namespaced_identifier = 24,
  aux_sym_script_header_repeat1 = 25,
  aux_sym_namespaced_identifier_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_script_header_token1] = "script_header_token1",
  [aux_sym_script_header_token2] = "script_header_token2",
  [aux_sym_script_header_token3] = "script_header_token3",
  [aux_sym_script_header_token4] = "script_header_token4",
  [aux_sym_script_header_token5] = "script_header_token5",
  [aux_sym_script_header_token6] = "script_header_token6",
  [anon_sym_SEMI] = ";",
  [aux_sym_single_line_comment_token1] = "single_line_comment_token1",
  [anon_sym_SEMI_SLASH] = ";/",
  [aux_sym_multi_line_comment_token1] = "multi_line_comment_token1",
  [anon_sym_SLASH_SEMI] = "/;",
  [anon_sym_LBRACE] = "{",
  [aux_sym_documentation_comment_token1] = "documentation_comment_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym__terminator] = "_terminator",
  [sym_script_file] = "script_file",
  [sym_script_header] = "script_header",
  [sym_single_line_comment] = "single_line_comment",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_documentation_comment] = "documentation_comment",
  [sym_namespaced_identifier] = "namespaced_identifier",
  [sym__normal_or_namespaced_identifier] = "_normal_or_namespaced_identifier",
  [aux_sym_script_header_repeat1] = "script_header_repeat1",
  [aux_sym_namespaced_identifier_repeat1] = "namespaced_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_script_header_token1] = aux_sym_script_header_token1,
  [aux_sym_script_header_token2] = aux_sym_script_header_token2,
  [aux_sym_script_header_token3] = aux_sym_script_header_token3,
  [aux_sym_script_header_token4] = aux_sym_script_header_token4,
  [aux_sym_script_header_token5] = aux_sym_script_header_token5,
  [aux_sym_script_header_token6] = aux_sym_script_header_token6,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_single_line_comment_token1] = aux_sym_single_line_comment_token1,
  [anon_sym_SEMI_SLASH] = anon_sym_SEMI_SLASH,
  [aux_sym_multi_line_comment_token1] = aux_sym_multi_line_comment_token1,
  [anon_sym_SLASH_SEMI] = anon_sym_SLASH_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_documentation_comment_token1] = aux_sym_documentation_comment_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__terminator] = sym__terminator,
  [sym_script_file] = sym_script_file,
  [sym_script_header] = sym_script_header,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym_documentation_comment] = sym_documentation_comment,
  [sym_namespaced_identifier] = sym_namespaced_identifier,
  [sym__normal_or_namespaced_identifier] = sym__normal_or_namespaced_identifier,
  [aux_sym_script_header_repeat1] = aux_sym_script_header_repeat1,
  [aux_sym_namespaced_identifier_repeat1] = aux_sym_namespaced_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_script_header_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_header_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_header_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_header_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_header_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_header_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multi_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_documentation_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_script_file] = {
    .visible = true,
    .named = true,
  },
  [sym_script_header] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_documentation_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_namespaced_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__normal_or_namespaced_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_script_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namespaced_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_extends = 1,
  field_flags = 2,
  field_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_extends] = "extends",
  [field_flags] = "flags",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_flags, 2},
    {field_name, 1},
  [3] =
    {field_extends, 2},
    {field_extends, 3},
    {field_name, 1},
  [6] =
    {field_extends, 2},
    {field_extends, 3},
    {field_flags, 4},
    {field_name, 1},
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '}') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == ';') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead == '{') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(15);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI_SLASH);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI_SLASH);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI_SLASH);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_multi_line_comment_token1);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_multi_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SLASH_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_documentation_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_documentation_comment_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__terminator);
      if (lookahead == '\n') ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == 'B') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(2);
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == 'N') ADVANCE(4);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_script_header_token4);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_script_header_token6);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_script_header_token2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_script_header_token3);
      END_STATE();
    case 41:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_script_header_token5);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_script_header_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 0},
  [28] = {(TSStateId)(-1)},
  [29] = {(TSStateId)(-1)},
  [30] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_single_line_comment] = STATE(0),
    [sym_multi_line_comment] = STATE(0),
    [sym_documentation_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_script_header_token1] = ACTIONS(1),
    [aux_sym_script_header_token2] = ACTIONS(1),
    [aux_sym_script_header_token3] = ACTIONS(1),
    [aux_sym_script_header_token4] = ACTIONS(1),
    [aux_sym_script_header_token5] = ACTIONS(1),
    [aux_sym_script_header_token6] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_SEMI_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_script_file] = STATE(22),
    [sym_script_header] = STATE(21),
    [sym_single_line_comment] = STATE(1),
    [sym_multi_line_comment] = STATE(1),
    [sym_documentation_comment] = STATE(1),
    [aux_sym_script_header_token1] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_SEMI_SLASH] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [2] = {
    [sym_single_line_comment] = STATE(2),
    [sym_multi_line_comment] = STATE(2),
    [sym_documentation_comment] = STATE(2),
    [aux_sym_namespaced_identifier_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(11),
    [aux_sym_script_header_token2] = ACTIONS(11),
    [aux_sym_script_header_token3] = ACTIONS(11),
    [aux_sym_script_header_token4] = ACTIONS(11),
    [aux_sym_script_header_token5] = ACTIONS(11),
    [aux_sym_script_header_token6] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_SEMI_SLASH] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [sym__terminator] = ACTIONS(19),
  },
  [3] = {
    [sym_single_line_comment] = STATE(3),
    [sym_multi_line_comment] = STATE(3),
    [sym_documentation_comment] = STATE(3),
    [aux_sym_namespaced_identifier_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(21),
    [aux_sym_script_header_token2] = ACTIONS(21),
    [aux_sym_script_header_token3] = ACTIONS(21),
    [aux_sym_script_header_token4] = ACTIONS(21),
    [aux_sym_script_header_token5] = ACTIONS(21),
    [aux_sym_script_header_token6] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_SEMI_SLASH] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(23),
    [sym__terminator] = ACTIONS(26),
  },
  [4] = {
    [sym_single_line_comment] = STATE(4),
    [sym_multi_line_comment] = STATE(4),
    [sym_documentation_comment] = STATE(4),
    [aux_sym_namespaced_identifier_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(28),
    [aux_sym_script_header_token2] = ACTIONS(28),
    [aux_sym_script_header_token3] = ACTIONS(28),
    [aux_sym_script_header_token4] = ACTIONS(28),
    [aux_sym_script_header_token5] = ACTIONS(28),
    [aux_sym_script_header_token6] = ACTIONS(28),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_SEMI_SLASH] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [sym__terminator] = ACTIONS(30),
  },
  [5] = {
    [sym_single_line_comment] = STATE(5),
    [sym_multi_line_comment] = STATE(5),
    [sym_documentation_comment] = STATE(5),
    [sym_identifier] = ACTIONS(21),
    [aux_sym_script_header_token2] = ACTIONS(21),
    [aux_sym_script_header_token3] = ACTIONS(21),
    [aux_sym_script_header_token4] = ACTIONS(21),
    [aux_sym_script_header_token5] = ACTIONS(21),
    [aux_sym_script_header_token6] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_SEMI_SLASH] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(21),
    [sym__terminator] = ACTIONS(26),
  },
  [6] = {
    [sym_single_line_comment] = STATE(6),
    [sym_multi_line_comment] = STATE(6),
    [sym_documentation_comment] = STATE(6),
    [aux_sym_script_header_repeat1] = STATE(10),
    [sym_identifier] = ACTIONS(32),
    [aux_sym_script_header_token2] = ACTIONS(34),
    [aux_sym_script_header_token3] = ACTIONS(32),
    [aux_sym_script_header_token4] = ACTIONS(32),
    [aux_sym_script_header_token5] = ACTIONS(32),
    [aux_sym_script_header_token6] = ACTIONS(32),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_SEMI_SLASH] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym__terminator] = ACTIONS(36),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      sym__terminator,
    STATE(8), 1,
      aux_sym_script_header_repeat1,
    STATE(7), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
    ACTIONS(32), 5,
      aux_sym_script_header_token3,
      aux_sym_script_header_token4,
      aux_sym_script_header_token5,
      aux_sym_script_header_token6,
      sym_identifier,
  [28] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym__terminator,
    STATE(8), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
      aux_sym_script_header_repeat1,
    ACTIONS(40), 5,
      aux_sym_script_header_token3,
      aux_sym_script_header_token4,
      aux_sym_script_header_token5,
      aux_sym_script_header_token6,
      sym_identifier,
  [54] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__terminator,
    STATE(7), 1,
      aux_sym_script_header_repeat1,
    STATE(9), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
    ACTIONS(32), 5,
      aux_sym_script_header_token3,
      aux_sym_script_header_token4,
      aux_sym_script_header_token5,
      aux_sym_script_header_token6,
      sym_identifier,
  [82] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      sym__terminator,
    STATE(8), 1,
      aux_sym_script_header_repeat1,
    STATE(10), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
    ACTIONS(32), 5,
      aux_sym_script_header_token3,
      aux_sym_script_header_token4,
      aux_sym_script_header_token5,
      aux_sym_script_header_token6,
      sym_identifier,
  [110] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      sym__terminator,
    STATE(11), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
    ACTIONS(28), 6,
      aux_sym_script_header_token2,
      aux_sym_script_header_token3,
      aux_sym_script_header_token4,
      aux_sym_script_header_token5,
      aux_sym_script_header_token6,
      sym_identifier,
  [136] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__terminator,
    STATE(12), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
    ACTIONS(49), 5,
      aux_sym_script_header_token3,
      aux_sym_script_header_token4,
      aux_sym_script_header_token5,
      aux_sym_script_header_token6,
      sym_identifier,
  [161] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(6), 1,
      sym__normal_or_namespaced_identifier,
    STATE(11), 1,
      sym_namespaced_identifier,
    STATE(13), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [185] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(9), 1,
      sym__normal_or_namespaced_identifier,
    STATE(11), 1,
      sym_namespaced_identifier,
    STATE(14), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [209] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(15), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [227] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(16), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [245] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_single_line_comment_token1,
    STATE(17), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [263] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(18), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [281] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_SLASH_SEMI,
    STATE(19), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [299] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      sym__terminator,
    STATE(20), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [317] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(21), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [335] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [353] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(23), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [371] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      aux_sym_documentation_comment_token1,
    STATE(24), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [389] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(25), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [407] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      aux_sym_multi_line_comment_token1,
    STATE(26), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [425] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [443] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
  [447] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [451] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 28,
  [SMALL_STATE(9)] = 54,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 110,
  [SMALL_STATE(12)] = 136,
  [SMALL_STATE(13)] = 161,
  [SMALL_STATE(14)] = 185,
  [SMALL_STATE(15)] = 209,
  [SMALL_STATE(16)] = 227,
  [SMALL_STATE(17)] = 245,
  [SMALL_STATE(18)] = 263,
  [SMALL_STATE(19)] = 281,
  [SMALL_STATE(20)] = 299,
  [SMALL_STATE(21)] = 317,
  [SMALL_STATE(22)] = 335,
  [SMALL_STATE(23)] = 353,
  [SMALL_STATE(24)] = 371,
  [SMALL_STATE(25)] = 389,
  [SMALL_STATE(26)] = 407,
  [SMALL_STATE(27)] = 425,
  [SMALL_STATE(28)] = 443,
  [SMALL_STATE(29)] = 447,
  [SMALL_STATE(30)] = 451,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespaced_identifier, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaced_identifier, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(16),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_or_namespaced_identifier, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_or_namespaced_identifier, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_header_repeat1, 2), SHIFT_REPEAT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_header_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_header_repeat1, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_header_repeat1, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_header, 3, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_header, 4, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_header, 5, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_header, 6, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation_comment, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_papyrus(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
