// LANGUAGE: MIPS32 ASSEMBLY
// ENV: MARS
// AUTHOR: David León Ortega
//GITHUB: https://github.com/lagunetero91

	.data
hello:	 .asciiz "Hello World"

	.text
la $a0,hello
li $v0,4
syscall
jr$ra