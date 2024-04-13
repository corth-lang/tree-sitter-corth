module.exports = grammar({
  name: "corth",

  extras: $ => [
    / /,
    /\t/,
    /\n/,
    $.inline_comment,
    $.multiline_comment,
  ],

  word: $ => $.name,

  rules: {
    source_file: $ => repeat($._global_statement),

    // global statements

    _global_statement: $ => choice(
      $.include_statement,
      $.namespace_scope,
      $.macro_definition,
      $.proc_definition,
      $.global_allocation,
    ),

    include_statement: $ => seq(
      'include',
      $.string_literal,
    ),

    namespace_scope: $ => seq(
      'namespace',
      field('name', $.name),
      $._global_statement,
      'endnamespace',
    ),

    proc_definition: $ => seq(
      'proc',
      $.name,
      field('arg', repeat($._type)),
      '->',
      field('return', repeat($._type)),
      'in',
      $.end_block,
    ),

    global_allocation: $ => seq(
      'memory',
      andSep(
        seq(
          field('name', $.name),
          field('size', $._compile_time_constant),
        ),
      ),
      'end',
    ),

    macro_definition: $ => seq(
      'macro',
      $.name,
      repeat(
        choice(
          $._local_statement,
          $.include_statement,
          $.namespace_scope,
          $.macro_definition,
          $.proc_definition,
        )
      ),
      'endmacro'
    ),

    // local statements
    _local_statement: $ => choice(
      $._primitive,
      $.local_allocation,
      $.if_statement,
      $.while_do_statement,
      $.let_statement,
      $.peek_statement,
      $.cast_statement,
      $.sizeof_statement,
      'break',
      'return'
    ),

    local_allocation: $ => seq(
      'memory',
      andSep(
        seq(
          field('name', $.name),
          field('size', $._compile_time_constant),
        ),
      ),
      'in',
      field('body', $.end_block)
    ),

    if_statement: $ => seq(
      'if',
      optional($.else_block),
      $.end_block,
    ),

    let_statement: $ => seq(
      'let',
      $.name_list,
      $.end_block,
    ),

    peek_statement: $ => seq(
      'peek',
      $.name_list,
      $.end_block,
    ),

    while_do_statement: $ => seq(
      'while',
      $.do_block,
      $.end_block,
    ),

    cast_statement: $ => seq(
      'cast',
      $._type,
    ),

    sizeof_statement: $ => seq(
      'sizeof',
      choice(
        $.builtin_type,
        $.name,
      ),
    ),

    // intermediate
    else_block: $ => seq(repeat($._local_statement), 'else'),
    end_block: $ => seq(repeat($._local_statement), 'end'),
    do_block: $ => seq(repeat($._local_statement), 'do'),

    name_list: $ => seq(repeat($.name), 'in'),

    number: $ => choice(
      $.number_literal,
      $.char_literal
    ),

    _compile_time_constant: $ => choice(
      $.number_literal,
      $.char_literal,
      $.name,

    ),

    _type: $ => choice(
      $.builtin_type,
      $.name,
    ),

    // primitives
    intrinsic: $ => choice(
      '+', '-',
      '*', '*2', '/', '%',
      'u*', 'u*2', 'u/', 'u%',
      '!!', '||', '&&', '^^',
      '!', '|', '&', '^',
      '=', '!=', '<', '<=', '>', '>=',
      '@8', '!8', '@16', '!16', '@32', '!32', '@64', '!64',
      'syscall0', 'syscall1', 'syscall2', 'syscall3', 'syscall4', 'syscall5', 'syscall6',
    ),
    binary_prefix: $ => /0[bB]/,
    octal_prefix: $ => /0[oO]/,
    hexadecimal_prefix: $ => /0[oO]/,
    number_literal: $ => /((0[bB][0-1]+)|0[oO][0-7]+|0[xX][0-9a-fA-F]+|-?([0-9]+))/,
    char_literal: $ => /\'(([^\\])|(\\([xX][0-9a-fA-F][0-9a-fA-F]|[0nt\'\"\\])))\'/,
    string_literal: $ => /\"[^\"]*\"/,
    builtin_type: $ => choice(
      'int', 'uint',
      'i8', 'i16', 'i32', 'i64',
      'u8', 'u16', 'u32', 'u64',
      'ptr', 'file-desc', 'bool'),
    singleton: $ => choice('true', 'false', 'NULLPTR'),
    name: $ => /[a-zA-Z_0-9\/_\-.:?!()\[\]{}=+@%<>]+/,

    _primitive: $ => choice(
      $.intrinsic,
      $.char_literal,
      $.number_literal,
      $.string_literal,
      $.builtin_type,
      $.singleton,
      $.name,
    ),

    // comments
    inline_comment: _ => token(/\/\/.*\n/),
    multiline_comment: _ => token(/\/\*([^*]|\*[^\/])*\*\//),
  },
});

function andSep(item) {
  return seq(item, repeat(seq('and', item)));
}
