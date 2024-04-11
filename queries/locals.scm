(proc_definition (end_block) @local.scope)
(local_allocation (end_block) @local.scope)
(let_statement (end_block) @local.scope)
(peek_statement (end_block) @local.scope)

(name_list (name) @local.definition)
(local_allocation name: (name) @local.definition)

(name) @local.reference
