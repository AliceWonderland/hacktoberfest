INCLUDE Irvine32.inc

.data
helloStr BYTE "Hello, World!",0

.code
main PROC

MOVZX EDX, OFFSET helloStr
CALL WriteString
CALL CrLf

main ENDP
END main
