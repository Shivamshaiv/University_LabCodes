Data Segment
        
Data ends

Code Segment
    Assume cs:code,ds:data
    start:
        MOV AX,data
        MOV DS,AX  
        MOV AX,2000h
        MOV BX,3000h
        MOV CX,1000h
        CMP AX,BX
        JG yesa
        CMP BX,CX
        JG b
        JMP c
        yesa:
             CMP AX,CX
             JG a
             JMP c
        
        a:
            INC AX
            HLT
        b:
            INC BX
            HLT
        c:
            INC CX
            HLT
        
Code ends
end start