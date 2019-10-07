;Reverse the string  

DATA SEGMENT
    SNAME DB "HELLO WORLD" 
    SLEN DB $-SNAME
    CNAME DB 10 DUP('O')
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
        CLD
        
        MOV DX,0H
        LEA SI,SNAME
        LEA DI,CNAME
        
        MOV CL,SLEN  
        MOV CH,0H
        
        LOOP_LABEL:
            MOV DL,DS:[SI]
            MOV ES:[DI+SLEN],DL   
            INC SI
            DEC DI
            
        LOOP LOOP_LABEL
                  
        
        
        
    
END START
CODE ENDS
