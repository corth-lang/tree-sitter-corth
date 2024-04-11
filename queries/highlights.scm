[
 "include"
 "namespace" "endnamespace"
 "macro" "endmacro"
 "proc" "->" "return"
 "in" "end"
 "memory" "and"
 "let" "peek"
 "if" "else"
 "while" "do" "break"
 "cast"
] @keyword

(intrinsic) @keyword.intrinsic

(char_literal) @number.char
(number_literal) @number
(string_literal) @string

(singleton) @constant.builtin

(inline_comment) @comment.inline
(multiline_comment) @comment.multiline

([
  (multiline_comment) @comment.multiline.doc
  (inline_comment) @comment.inline.doc
  ]+
 .
 [
  (proc_definition)
  (macro_definition)
  (global_allocation)
  ])

(include_statement (string_literal) @string.source)

(macro_definition (name) @function.name)
(proc_definition (name) @function.name)
(proc_definition (name) @function.main (#eq? @function.main "main"))
(global_allocation (name) @function.name)
(local_allocation (name) @local.name)

(returns_type_list (builtin_type) @type.builtin)
(in_type_list (builtin_type) @type.builtin)
(cast_statement (builtin_type) @type.builtin)
(sizeof_statement (builtin_type) @type.builtin)

((name) @function.call (#is-not? local))
(name_list (name) @local.definition)
(local_allocation name: (name) @local.definition)
