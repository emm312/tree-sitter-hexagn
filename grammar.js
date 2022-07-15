module.exports = grammar({
    name: 'hexagn',

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.function_definition,
            $.variable_definition
        ),

        func_name: $ => /\w+/,

        function_definition: $ => seq(
            $.type,
            $.func_name,
            $.parameter_list,
            $.block
        ),

        parameter_list: $ => seq(
            alias('(',$.parens),
            repeat(seq($.type, $.identifier, optional(','))),
            alias(')',$.parens)
        ),
        
        equals: $ => '=',

        variable_definition: $ => seq(
            $.type,
            $.identifier,
            optional(alias('=', $.equals)),
            optional($._expression),
            ';'
        ),
        type: $ => choice(
            'int8',
            'int16',
            'int32',
            'int64',
            'string',
            'char'
        ),

        block: $ => seq(
            alias('{', $.parens),
            repeat($._any),
            alias('}', $.parens)
        ),
        _any : $ => choice(
            $.variable_definition,
            $._statement
        ),

        _statement: $ => choice(
            $.return_statement,
            $.while_loop,
            $.if_statement
            // TODO: other kinds of statements
        ),

        keyword: $ => choice(
            'return',
            'while',
            'if'
        ),

        return_statement: $ => seq(
            'return',
            $._expression,
            ';'
        ),
        while_loop: $ => seq(
            alias('while', $.keyword),
            '(',
            $._expression,
            ')',
            $.block
        ),
        if_statement: $ => seq(
            alias('if', $.keyword),
            alias('(', $.parens),
            $._expression,
            alias(')', $.parens),
            $.block,
            optional(seq('else', $.block))
        ),
        
        parens: $ => choice(
            '(',
            ')',
            '{',
            '}',
        ),


        _expression: $ => repeat1(
            seq(
                optional(choice("+", "-", "*", "/")),
                choice($.identifier,$.number),
                alias(choice("+", "-", "*", "/", "^", "==", "!=", "<", ">", "<=", ">="), $.equals),
                choice($.identifier,$.number)
            )
            // TODO: other kinds of expressions
        ),

        identifier: $ => /[a-z]+/,

        number: $ => /\d+/
    }
});