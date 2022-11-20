module.exports = grammar({
    name: "papyrus",

    rules: {
        source_file: $ => repeat($.identifier),

        identifier: $ => /[a-zA-Z_][a-zA-Z_0-9]*/,
    }
});
