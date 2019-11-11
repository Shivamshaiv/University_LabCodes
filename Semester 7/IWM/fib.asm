DATA SEGMENT
    BCD DB 34H
    BINARY DB ? 
    N DW 13
DATA ENDS

STACK_SEG SEGMENT STACK
    DW 40 DUP(0)
    STACK_TOP LABEL WORD
STACK_SEG ENDS

CODE SEGMENT
    START:
    ASSUME CS:CODE,DS:DATA,SS:STACK_SEG
        MOV AX,STACK_SEG
        MOV SS,AX
        LEA SP,STACK_TOP
        MOV AX,DATA
        MOV DS,AX  
        

        
        MOV CX,N   ; Move the final number    
        CALL FIB_PROC
       
        HLT
    ;The proc
    FIB_PROC PROC NEAR
        MOV BX,0H
        MOV AX,01H
        PUSH AX   
        ;MOV BP,SP  
        ;ADD BX,WORD PTR [BP]
        PUSH BX
        FIB_LOOP:
            MOV BP,SP
            MOV BX,WORD PTR [BP]
            ADD BX,WORD PTR [BP+2]
            PUSH BX
        LOOP FIB_LOOP
        HLT
        RET
    FIB_PROC ENDP
    
END START
CODE ENDS
