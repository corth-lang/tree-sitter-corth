;; This file is part of tree-sitter-corth.

;; tree-sitter-corth is free software: you can redistribute it and/or modify it under the
;; terms of the GNU General Public License as published by the Free Software Foundation,
;; either version 3 of the License, or (at your option) any later version.

;; tree-sitter-corth is distributed in the hope that it will be useful, but WITHOUT ANY
;; WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
;; PURPOSE. See the GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License along with
;; tree-sitter-corth. If not, see <https://www.gnu.org/licenses/>.

(proc_definition (end_block) @local.scope)
(local_allocation (end_block) @local.scope)
(let_statement (end_block) @local.scope)
(peek_statement (end_block) @local.scope)

(name_list (name) @local.definition)
(local_allocation name: (name) @local.definition)

(name) @local.reference
