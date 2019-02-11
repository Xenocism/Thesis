.section .text
.globl main

main:
        mv msg1(), %eax

.section .data
msg1:   .WORD   1
.zero 256
msg2:   .WORD   2


