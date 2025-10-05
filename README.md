# LFTC

# MPL name: bljMPL

## Data types: 

 1. **Integer**: Data type representing integers.
 2. **Float**: Data type representing real numbers.
 3. **String**: Data type representing a string of letters.

## Instructions:

 1. **Assignment**: <pre> ``` variable "=" expression ``` </pre>
 2. **Input/Output**: <pre> ``` "blj_in" {">>" identifier} ``` ``` "blj_out" {"<<" (identifier | "endl")}``` </pre>
 3. **Conditional**: <pre> ``` "if" "(" cond_expr ")" "{" instr "}" ["else" "{" instr "}"] ``` </pre>
 4. **Loop**: <pre> ``` "while" "(" cond_expr ")" "{" instr "}" ``` </pre>

## EBNF: 

<pre>

 letter = "a" | ... | "z" | "A" | ... | "Z".
 digit = "0" | "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8" | "9".

 identifier = ("_" | letter) {"_" | letter | digit}.
 datatype = "int" | "float" | "string".

 sign = [ "+" | "-" ].
 digits = digit { digit }.
 int = sign digits.
 float = sign digits [".", digits].
 string = letter { letter | digit}.
 const = int | float.
 
 operation = "+" | "-" | "/" | "%" | "*".
 arith_expression = identifier operation identifier | identifier operation const | const operation const.
 expression = identifier | const | arith_expression.

 cond_expr = logical_expr [ cond_exprs ].
 cond_exprs = {logical_oper logical_expr}.
 logical_expr = identifier comparator identifier | identifier comparator const.
 comparator = "<" | ">" | "==" | "!=" | ">=" | "<=".
 logical_oper = "&&" | "||".

 instr_list = [instr, {instr}].
 instr = (assign_instr | read_instr | write_instr | decl_instr) ";" | cond_instr | while_instr

 assign_instr = identifier "=" expression.
 read_instr = "blj_in" {">>" identifier}.
 write_instr = "blj_out" {"<<" (identifier | "endl")}.
 decl_instr = datatype identifier ["=" expression].
 cond_instr = "if" "(" cond_expr ")" "{" instr_list "}" ["else" "{" instr "}"].
 while_instr = "while" "(" cond_expr ")" "{" instr "}".

 program = "begin" instr_list "end".
 
 
</pre>