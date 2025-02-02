;; This file is part of tree-sitter-corth.

;; tree-sitter-corth is free software: you can redistribute it and/or modify it under the
;; terms of the GNU General Public License as published by the Free Software Foundation,
;; either version 3 of the License, or (at your option) any later version.

;; tree-sitter-corth is distributed in the hope that it will be useful, but WITHOUT ANY
;; WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
;; PURPOSE. See the GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License along with
;; tree-sitter-corth. If not, see <https://www.gnu.org/licenses/>.

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
