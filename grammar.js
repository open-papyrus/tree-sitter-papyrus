module.exports = grammar({
    name: "papyrus",

    rules: {
        script_file: ($) => seq($.script_header),

        script_header: ($) =>
            seq(
                "ScriptName",
                $._normal_or_namespaced_identifier,
                $._terminator,
                optional(seq("extends", $._normal_or_namespaced_identifier)),
            ),

        single_line_comment: ($) => seq(";", /[^\n]*/, $._terminator),

        multi_line_comment: ($) => seq(";/", /(?:[^\/]|\/[^;])*/, "/;"),

        documentation_comment: ($) => seq("{", /[^}]*/, "}"),

        identifier: ($) => /[a-zA-Z_][a-zA-Z_0-9]*/,

        namespaced_identifier: ($) => seq($.identifier, repeat1(seq(":", $.identifier))),

        _normal_or_namespaced_identifier: ($) =>
            choice($.namespaced_identifier, $.identifier),

        _terminator: ($) => "\n",
    },

    word: ($) => $.identifier,

    extras: ($) => [
        /\u0009|\u000A|\u000D|\u0020/,
        $.single_line_comment,
        $.multi_line_comment,
        $.documentation_comment,
    ],
});
