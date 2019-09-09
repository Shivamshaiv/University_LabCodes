data segment
      sname db 'iitjeeeeeae$'
      slen db $-sname
      var db 'e'
data ends


code segment
start:
      assume cs:code,ds:data,es:data
     
      mov ax,data
      mov ds,ax
      mov es,ax
      cld
     
      mov al,var
      mov ah,0h
      lea si,sname
      mov cl,slen
      mov ch,0h
     
      loop_label:
     
        repne scasb
        cmp cx,0h
        je exit
        inc ah           ; The final output in AL
        jmp loop_label
           
      exit:
     
    end start    
    code ends