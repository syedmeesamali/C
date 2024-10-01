section .text
    global _start
_start:
    xor eax, eax
    push eax
    push 0x6578652e         ;"exe."
    push 0x636c6163         ;"calc"
    mov ebx, esp
    
    ;Get winExec address from kernel32.dll
    mov eax, 0x76c76360
    push 1
    push ebx                ;"calc.exe"
    call eax
    
    ;Exit cleanly
    xor eax, eax
    push eax
    mov al, 0x1
    int 0x80

    
