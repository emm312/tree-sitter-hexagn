module.exports = grammar({
    name: 'hexagn',
    extras: $ => [
      $._whitespace,
      $.comments
    ],
    

    rules: {
        
        source_file: $ => repeat(choice($._statement, $.function_definition)),
        _whitespace: $ => /\s+/,
        func_name: $ => /\w+/,
        string: $ => /".*?"/,
        comments: $ =>  /\/\/.*/,

        function_definition: $ => seq(
            $.type,
            $.func_name,
            $.parameter_list,
            $.block
        ),

        urcl_codeblock: $ => seq(
          'urcl',
          $.string
        ),

        parameter_list: $ => seq(
            '(',
            repeat(seq(optional($.type), $.identifier, optional(','))),
            ')'
        ),
        
        equals: $ => '=',

        variable_definition: $ => seq(
            $.type,
            $.identifier,
            alias('=', $.equals),
            $._expression
            
        ),

        variable_assignment: $ => seq(
          $.identifier,
          alias('=', $.equals),
          $._expression
        ),
        type: $ => token(choice(
            'int8',
            'int16',
            'int32',
            'int64',
            'uint8',
            'uint16',
            'uint32',
            'string',
            'char'
        )),

        block: $ => seq(
            '{',
            optional(repeat($._statement)),
            '}'
        ),

        _statement: $ => choice(seq(choice(
            $.return_statement,
            $.variable_assignment,
            $.variable_definition,
            $.func_call,
            $.import_statement,
            $.block,
            
            $.urcl_codeblock
            // TODO: other kinds of statements
        ), ';'), 
            $.while_loop,
            $.if_statement
        ),

        keyword: $ => choice(
            'return',
            'while',
            'if',
            'urcl',
            'import'
        ),

        return_statement: $ => seq(
            'return',
            $._expression,
        ),
        while_loop: $ => seq(
            alias('while', $.keyword),
            seq('(', $._expression, ')'),
            $.block
        ),
        if_statement: $ => seq(
            alias('if', $.keyword),
            '(',
            $._expression,
            ')',
            $.block,
            optional(seq('else', $.block))
        ),
        


        _expression: $ => choice($.binary_expression, $.func_call, $.identifier, $.number),
        binary_expression: $ => choice(
          prec.left(1, seq(
            field("left", $._expression),
            field("operator", "+"),
            field("right", $._expression),
          )),
          prec.left(1, seq(
            field("left", $._expression),
            field("operator", "-"),
            field("right", $._expression),
          )),
          prec.left(2, seq(
            field("left", $._expression),
            field("operator", "*"),
            field("right", $._expression),
          )),
          prec.left(2, seq(
            field("left", $._expression),
            field("operator", "/"),
            field("right", $._expression),
          )),
          prec.left(3, seq(
            field("left", $._expression),
            field("operator", "<"),
            field("right", $._expression),
          )),
          prec.left(3, seq(
            field("left", $._expression),
            field("operator", ">"),
            field("right", $._expression),
          )),
          prec.left(3, seq(
            field("left", $._expression),
            field("operator", "=="),
            field("right", $._expression),
          )),
          prec.left(3, seq(
            field("left", $._expression),
            field("operator", "!="),
            field("right", $._expression),
          )),
          prec.left(3, seq(
            field("left", $._expression),
            field("operator", "<="),
            field("right", $._expression),
          )),
          prec.left(3, seq(
            field("left", $._expression),
            field("operator", ">="),
            field("right", $._expression),
          )),
       ),

        import_statement: $ => seq(
            'import',
            $.identifier,
        ),
        
        func_call: $ => seq(
            $.identifier, $.parameter_list,
        ),


        identifier: $ => /[A-Za-z-_.]+/,

        number: $ => /\d+/
    }
});