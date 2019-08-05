data segment
	array db 1h,2h,3h,4h,5h
	sum db 0000h
	avg db 0000h
data ends

code segment 
	start: assume ds:data,cs:code
	mov ax,data
	mov ds,ax
	
	mov ax,0h
	mov cx,0h
	
	mov cx,5h
	LEA bx,array
	mov si,0h
	
	loop_label:
		mov al,Byte PTR [bx+si]
		add dl,al
		inc si
		loop loop_label
	mov sum,dl
	
	mov bx,si
	mov ax,dx
	div bl
	mov avg,al  ; Average is in al
	
code ends
end start
	;mov bl,si
	;div bl
	;mov avg,al
	
