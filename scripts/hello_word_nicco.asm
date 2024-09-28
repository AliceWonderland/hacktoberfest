#Hello world in mips assembly

.data
    hello: .asciiz "Hello, world!"

.text
    li $v0,4
    la $a0,hello
    syscall

    li $v0,10
    syscall