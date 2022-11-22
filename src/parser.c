#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
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
  sym__terminator = 11,
  sym_script_file = 12,
  sym_script_header = 13,
  sym_single_line_comment = 14,
  sym_multi_line_comment = 15,
  sym_documentation_comment = 16,
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
  [sym__terminator] = "_terminator",
  [sym_script_file] = "script_file",
  [sym_script_header] = "script_header",
  [sym_single_line_comment] = "single_line_comment",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_documentation_comment] = "documentation_comment",
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
  [sym__terminator] = sym__terminator,
  [sym_script_file] = sym_script_file,
  [sym_script_header] = sym_script_header,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym_documentation_comment] = sym_documentation_comment,
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
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == ';') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '{') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(16);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '/') ADVANCE(12);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI_SLASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI_SLASH);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI_SLASH);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_multi_line_comment_token1);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_multi_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_documentation_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_documentation_comment_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__terminator);
      if (lookahead == '\n') ADVANCE(26);
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
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {(TSStateId)(-1)},
  [14] = {(TSStateId)(-1)},
  [15] = {(TSStateId)(-1)},
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
  },
  [1] = {
    [sym_script_file] = STATE(6),
    [sym_script_header] = STATE(7),
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
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(2), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [18] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      aux_sym_multi_line_comment_token1,
    STATE(3), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [36] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      aux_sym_documentation_comment_token1,
    STATE(4), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [54] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(5), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [72] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(6), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [90] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(7), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [108] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__terminator,
    STATE(8), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [126] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_SLASH_SEMI,
    STATE(9), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [144] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(10), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [162] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__terminator,
    STATE(11), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [180] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      anon_sym_SEMI_SLASH,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(12), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_documentation_comment,
  [198] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [202] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [206] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 162,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 198,
  [SMALL_STATE(14)] = 202,
  [SMALL_STATE(15)] = 206,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_header, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation_comment, 3),
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
