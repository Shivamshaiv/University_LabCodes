DATA SEGMENT
    BCD DB 34H
    BINARY DB ?
DATA ENDS

STACK_SEG SEGMENT STACK
    DW 20 DUP(0)
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
        

        
        ; Function to convert BCD to Binary
        PUSH AX
        
        MOV AL,BCD
        MOV BL,BINARY
        
        CALL BCD_BINARY    
        MOV BINARY,BL
        
        POP AX  
        HLT
    ;The proc
    BCD_BINARY PROC NEAR
        MOV AH,AL 
        AND AH,0F0h
        AND AL,00Fh
        ROR AH,4   
        MOV CL,0Ah
        XCHG AL,AH      ; To multiply a byte the content should be in AL  
        PUSH AX         ; The result will be in AX hence we need to put AL somewhere
        MUL CL       
        MOV CH,AL       ; Result of multiplication
        POP AX
        XCHG AL,AH      ; Restore the normal state   
        ADD AL,CH
        MOV BL,AL       ; Because final answer is supposed to be in BL   
        
        RET
    BCD_BINARY ENDP
    
END START
CODE ENDS
    