;This works on Windows using NASM-Assembler. It makes use of the printf() C-Function

    global  _main
    extern  _printf

    section .text
_main:
    push    message
    call    _printf
    add     esp, 4
    ret
message:
    db  'Hello, World', 10, 0
