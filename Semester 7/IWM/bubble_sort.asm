data segment
	array db 20h,4h,3h,40h,5h
	swap  db 0000h
	cnt   db 5
data ends

code segment 
	assume ds:data,cs:code   
	start:
	mov ax,data
	mov ds,ax 

	
	;XCHG AX,BX
	
	
	
	mov ax,0h
	mov cx,0h
	
	mov cx,4h
	LEA bx,array
	mov si,0h
	
	outer_label:
	mov si,0h
	    inner_label:
	        mov dl,al 
		    mov al,Byte PTR [bx+si]      
		    CMP al, Byte PTR [bx+si+1] 
		    JL change
		    inc si
		    after_comp:
	            CMP SI,5
	            JNE inner_label	
    loop outer_label     
    HLT
	
	change:
	    XCHG dh, Byte PTR [bx+si+1]
	    XCHG Byte PTR [bx+si+1],al
	    XCHG Byte PTR [bx+si],dh  
	    JMP after_comp
	

	
code ends
end start
	;mov bl,si
	;div bl
	;mov avg,al