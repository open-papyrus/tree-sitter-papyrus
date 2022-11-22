#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_ScriptName = 2,
  anon_sym_extends = 3,
  anon_sym_SEMI = 4,
  aux_sym_single_line_comment_token1 = 5,
  anon_sym_SEMI_SLASH = 6,
  aux_sym_multi_line_comment_token1 = 7,
  anon_sym_SLASH_SEMI = 8,
  anon_sym_LBRACE = 9,
  aux_sym_documentation_comment_token1 = 10,
  anon_sym_RBRACE = 11,
  anon_sym_COLON = 12,
  sym__terminator = 13,
  sym_script_file = 14,
  sym_script_header = 15,
  sym_single_line_comment = 16,
  sym_multi_line_comment = 17,
  sym_documentation_comment = 18,
  sym_namespaced_identifier = 19,
  sym__normal_or_namespaced_identifier = 20,
  aux_sym_namespaced_identifier_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_ScriptName] = "ScriptName",
  [anon_sym_extends] = "extends",
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
  [aux_sym_namespaced_identifier_repeat1] = "namespaced_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_ScriptName] = anon_sym_ScriptName,
  [anon_sym_extends] = anon_sym_extends,
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
  [anon_sym_ScriptName] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
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
  [aux_sym_namespaced_identifier_repeat1] = {
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
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 3,
  [9] = 6,
  [10] = 10,
  [11] = 10,
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
  [22] = 17,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 14,
  [27] = 27,
  [28] = 28,
  [29] = 29,
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
      if (lookahead == 'S') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 1:
      if (lookahead == 'c') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_ScriptName);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 0},
  [27] = {(TSStateId)(-1)},
  [28] = {(TSStateId)(-1)},
  [29] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_single_line_comment] = STATE(0),
    [sym_multi_line_comment] = STATE(0),
    [sym_documentation_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_ScriptName] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_SEMI_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_script_file] = STATE(23),
    [sym_script_header] = STATE(13),
    [sym_single_line_comment] = STATE(1),
    [sym_multi_line_comment] = STATE(1),
    [sym_documentation_comment] = STATE(1),
    [anon_sym_ScriptName] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_SEMI_SLASH] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(17), 1,
      sym__terminator,
    STATE(8), 1,
      aux_sym_namespaced_identifier_repeat1,
    STATE(2), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [24] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_COLON,
    STATE(3), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
      aux_sym_namespaced_identifier_repeat1,
  [46] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_COLON,
    STATE(3), 1,
      aux_sym_namespaced_identifier_repeat1,
    STATE(4), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [70] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(26), 1,
      sym_identifier,
    STATE(16), 1,
      sym__normal_or_namespaced_identifier,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(5), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [94] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_COLON,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_namespaced_identifier_repeat1,
    STATE(6), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [118] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(20), 1,
      sym__normal_or_namespaced_identifier,
    STATE(22), 1,
      sym_namespaced_identifier,
    STATE(7), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [142] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      sym__terminator,
    ACTIONS(32), 1,
      anon_sym_COLON,
    STATE(8), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
      aux_sym_namespaced_identifier_repeat1,
  [164] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(28), 1,
      sym__terminator,
    STATE(2), 1,
      aux_sym_namespaced_identifier_repeat1,
    STATE(9), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [188] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    STATE(10), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [207] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      sym__terminator,
    ACTIONS(35), 1,
      anon_sym_COLON,
    STATE(11), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [228] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_extends,
    STATE(12), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [249] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(13), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [267] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(14), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [285] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym_single_line_comment_token1,
    STATE(15), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [303] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      sym__terminator,
    STATE(16), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [321] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(28), 1,
      sym__terminator,
    STATE(17), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [339] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(18), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [357] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_SLASH_SEMI,
    STATE(19), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [375] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(20), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [393] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__terminator,
    STATE(21), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [411] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [429] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(23), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [447] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_documentation_comment_token1,
    STATE(24), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [465] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      aux_sym_multi_line_comment_token1,
    STATE(25), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [483] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(26), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [501] = 1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
  [505] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [509] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 118,
  [SMALL_STATE(8)] = 142,
  [SMALL_STATE(9)] = 164,
  [SMALL_STATE(10)] = 188,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 228,
  [SMALL_STATE(13)] = 249,
  [SMALL_STATE(14)] = 267,
  [SMALL_STATE(15)] = 285,
  [SMALL_STATE(16)] = 303,
  [SMALL_STATE(17)] = 321,
  [SMALL_STATE(18)] = 339,
  [SMALL_STATE(19)] = 357,
  [SMALL_STATE(20)] = 375,
  [SMALL_STATE(21)] = 393,
  [SMALL_STATE(22)] = 411,
  [SMALL_STATE(23)] = 429,
  [SMALL_STATE(24)] = 447,
  [SMALL_STATE(25)] = 465,
  [SMALL_STATE(26)] = 483,
  [SMALL_STATE(27)] = 501,
  [SMALL_STATE(28)] = 505,
  [SMALL_STATE(29)] = 509,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaced_identifier, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(26),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_or_namespaced_identifier, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(14),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_header, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_header, 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation_comment, 3),
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
