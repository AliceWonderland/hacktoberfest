;Hello world in 16 bit assembly with the BIOS
;AUTHOR: Adison Heathcott
;GITHIB: https://github.com/Yuri0011

[bits 16]
[org 0x7C00]

section .data
HELLO_WORLD_MSG: db "Hello World", 0

section .text

_start:
    mov ah, 0x0E    ;BIOS subfunction
    mov bx, 0x0007  ;BH - Page Number / BL - Text Color

    mov si, HELLO_WORLD_MSG

    printStringLoop:
    cmp byte [si], 0    ;Check for string termination
    je stringReturn

    mov al, byte[si]    ;Move the character to print into al
    int 0x10

    inc si
    jmp printStringLoop

    stringReturn:
    ;Return a new line
    mov ah, 0x0E
    mov al, 0x0D
    int 0x10
    mov al, 0x0A
    int 0x10

    jmp $

;Fill the end of the file until 510 bytes so it is seen as the bootloader by the BIOS
times 510-($-$$) db 0
dw 0xaa55