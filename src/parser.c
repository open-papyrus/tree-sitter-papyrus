#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_ScriptName = 2,
  anon_sym_SEMI = 3,
  aux_sym_single_line_comment_token1 = 4,
  anon_sym_SEMI_SLASH = 5,
  aux_sym_multi_line_comment_token1 = 6,
  anon_sym_SLASH_SEMI = 7,
  anon_sym_LBRACE = 8,
  aux_sym_documentation_comment_token1 = 9,
  anon_sym_RBRACE = 10,
  anon_sym_COLON = 11,
  sym__terminator = 12,
  sym_script_file = 13,
  sym_script_header = 14,
  sym_single_line_comment = 15,
  sym_multi_line_comment = 16,
  sym_documentation_comment = 17,
  sym_namespaced_identifier = 18,
  aux_sym_namespaced_identifier_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_ScriptName] = "ScriptName",
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
  [aux_sym_namespaced_identifier_repeat1] = "namespaced_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_ScriptName] = anon_sym_ScriptName,
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
      END_STATE();
    case 1:
      if (lookahead == 'c') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 10:
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
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 16},
  [18] = {(TSStateId)(-1)},
  [19] = {(TSStateId)(-1)},
  [20] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_single_line_comment] = STATE(0),
    [sym_multi_line_comment] = STATE(0),
    [sym_documentation_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_ScriptName] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_SEMI_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_script_file] = STATE(15),
    [sym_script_header] = STATE(8),
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
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(18), 1,
      sym__terminator,
    STATE(2), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
      aux_sym_namespaced_identifier_repeat1,
  [22] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(20), 1,
      anon_sym_COLON,
    ACTIONS(22), 1,
      sym__terminator,
    STATE(2), 1,
      aux_sym_namespaced_identifier_repeat1,
    STATE(3), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [46] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(20), 1,
      anon_sym_COLON,
    ACTIONS(24), 1,
      sym__terminator,
    STATE(3), 1,
      aux_sym_namespaced_identifier_repeat1,
    STATE(4), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [70] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(18), 1,
      sym__terminator,
    ACTIONS(26), 1,
      anon_sym_COLON,
    STATE(5), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [91] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(12), 1,
      sym_namespaced_identifier,
    STATE(6), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [112] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    STATE(7), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [130] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(8), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [148] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      sym__terminator,
    STATE(9), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [166] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(36), 1,
      anon_sym_SLASH_SEMI,
    STATE(10), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [184] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      aux_sym_single_line_comment_token1,
    STATE(11), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [202] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      sym__terminator,
    STATE(12), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [220] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(40), 1,
      sym_identifier,
    STATE(13), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [238] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(14), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [256] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(15), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [274] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      aux_sym_documentation_comment_token1,
    STATE(16), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [292] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      aux_sym_multi_line_comment_token1,
    STATE(17), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [310] = 1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
  [314] = 1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
  [318] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 91,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 148,
  [SMALL_STATE(10)] = 166,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 202,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 238,
  [SMALL_STATE(15)] = 256,
  [SMALL_STATE(16)] = 274,
  [SMALL_STATE(17)] = 292,
  [SMALL_STATE(18)] = 310,
  [SMALL_STATE(19)] = 314,
  [SMALL_STATE(20)] = 318,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(13),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaced_identifier, 2),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_header, 3),
  [44] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation_comment, 3),
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
