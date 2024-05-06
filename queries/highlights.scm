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

((name) @function.call (#is-not? local))
(name_list (name) @local.definition)
(local_allocation name: (name) @local.definition)

[(source_file
  [(inline_comment) (multiline_comment)] @comment.inline.doc)
 (namespace_scope
  [(inline_comment) (multiline_comment)] @comment.multiline.doc)]

(proc_definition
 [(inline_comment) @comment.inline.doc
  (multiline_comment) @comment.multiline.doc])

(proc_definition
 (inline_comment) @comment.signature
 [arg: (builtin_type)
       return: (builtin_type)])

(include_statement (string_literal) @string.source)

(macro_definition (name) @function.name)
(proc_definition (name) @function.name)
(proc_definition (name) @function.main (#eq? @function.main "main"))
(global_allocation (name) @function.name)

(builtin_type) @type.builtin
