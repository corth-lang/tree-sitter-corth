module.exports = grammar({
    name: "Corth",

    extras: $ => [
	/ /,
	/\t/,
	/\n/,
	/\/\/.*/,
	/\/\*(.|\n)*\*\//,
    ],

    rules: {
	source_file: $ => repeat(
	    choice(
		$.include_statement,
		$.macro_definition,
		$.proc_definition,
	    ),
	),

	// global statements
	include_statement: $ => seq(
	    'include',
	    $.string_literal,
	),

	proc_definition: $ => seq(
	    'proc',
	    $.name,
            $.procedure_signature,
	    $.code_block,
	),

	global_allocation: $ => seq(
	    'memory',
	    $.name,
	    choice(
		$.name,
	    ),
	    'end',
	),

        procedure_signature: $ => seq(
            $.argument_signature,
            $.return_signature,
        ),

	argument_signature: $ => seq(
	    repeat(
		$.intrinsic_type,
	    ),
	    '->',
	),

	return_signature: $ => seq(
	    repeat(
		$.intrinsic_type,
	    ),
	    'in',
	),

	macro_definition: $ => seq(
	    'macro',
	    $.name,
	    repeat($.expandable),
	    'endmacro'
	),

	expandable: $ => choice(
	    'include',
	    'memory',
	    'proc',
	    '->',
	    'in',
	    'end',
	    'if',
	    'else',
	    'while',
	    'do',
	    'let',
	    'peek',
	    $.name,
	    $.string_literal,
	    $.intrinsic_type,
	),

	// local statements
	code_block: $ => seq(
	    repeat($.callable),
	    'end',
	),

	else_code_block: $ => seq(
	    repeat($.callable),
	    'else',
	),

	do_code_block: $ => seq(
	    repeat($.callable),
	    'do',
	),

	callable: $ => choice(
	    $.local_allocation,
	    $.if_statement,
	    $.if_else_statement,
	    $.while_do_statement,
	    $.let_statement,
	    $.peek_statement,
	    $.name,
	    $.string_literal,
	),

	local_allocation: $ => seq(
	    'memory',
	    $.name,
	    choice(
		$.name,
	    ),
	    'in',
	    $.code_block,
	),

	if_else_statement: $ => seq(
	    'if',
	    $.else_code_block,
	    $.code_block,
	),

	if_statement: $ => seq(
	    'if',
	    $.code_block,
	),

	let_statement: $ => seq(
	    'let',
	    repeat($.name),
	    'in',
	    $.code_block
	),

	peek_statement: $ => seq(
	    'peek',
	    repeat($.name),
	    'in',
	    $.code_block
	),

	while_do_statement: $ => seq(
	    'while',
	    $.do_code_block,
	    $.code_block,
	),

	// primitives
	// integer_immediate: $ => /((0b[0-1]+)|0o[0-7]+|0x[0-9a-fA-F]+|-?([0-9]+))/,
	name: $ => /[^ \t\n]+/,
	string_literal: $ => /\"[^\"]*\"/,
	intrinsic_type: $ => choice(
	    'int',
	    'bool'
	),
    },
});
