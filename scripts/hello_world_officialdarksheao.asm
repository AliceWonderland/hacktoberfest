;LANGUAGE: Assembly
;ENV: x32
;AUTHOR: Philip Wrinkle
;GITHUB: https://github.com/officialdarksheao
;REQUIREMENTS: assemby compiler and linker
    global _main
    extern  _GetStdHandle@4   ;defining that we are using these 3 items from win api
    extern  _WriteFile@20
    extern  _ExitProcess@4

    section .text
_main:
    mov ebp, esp
    sub esp, 4

    ; equivilant to hStdOut = GetstdHandle( STD_OUTPUT_HANDLE)
    ; setting up out stdOut
    push -11
    call _GetStdHandle@4
    mov ebx, eax    

    ; equivilant to WriteFile( hstdOut, message, length(message), &bytes, 0);
    ; now that we have hstdOut stored in ebx, call WriteFile to send our message to it
    push 0
    lea  eax, [ebp-4]
    push eax
    push (msg_end - msg)
    push msg
    push ebx
    call _WriteFile@20

    ; equivilant to ExitProcess(0)
    ; Exit with no errors
    push 0
    call _ExitProcess@4

    hlt
msg:
    db 'Hello, World', 10
msg_end