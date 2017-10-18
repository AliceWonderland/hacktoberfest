/* Hello world implemented for Linux in GNU AS syntax, x86_64 */

    .text
    .globl _start
    .type _start, @function
_start:
    movq %rsp, %rbp
    movq $0x00000A21646C726F, %rax /* 'orld!\n\0\0' */
    pushq %rax
    movq $0x77202C6F6C6C6548, %rax /* 'Hello, w' */
    pushq %rax
    movq $1, %rax
    movq $2, %rdi
    movq %rsp, %rsi
    movq $14, %rdx
    syscall
    movq $60, %rax
    movq $0, %rdi
    syscall
