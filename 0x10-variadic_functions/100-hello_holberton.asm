section     .text 

        global      main      ;must be declared for linker(ld)

main:                          ;tell linker entry point 

        mov         edx,len    ;message length
        mov         ecx,msg    ;message for write
        mov         ebx,1      ;descriptor of the file outpout standar (stdout)
        mov         eax,4      ;system calling number (sys_write)
        int         0x80       ;Calling of the kernel
    
        section     .data

        msg     db 'Hello, Holberton',0xa   ;srting for printing
        len     equ $ - msg