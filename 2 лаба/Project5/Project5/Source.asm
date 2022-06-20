.686
.model flat,stdcall
.stack 100h
.data
X dd 54697;
Y dd 12799;
Z dd 21845;
count dw ?;
.code
ExitProcess PROTO STDCALL :DWORD
Start:
mov eax, X;
mov ebx, Y;
mov cx, 3;
mov edx, Z;

sub eax,1;

cicle:
	cmp cx, 0;
	je metka
	add ebx,eax;
loop cicle

metka:
	or eax,edx;

cmp eax,4328;
	jge metkaa
	jl metkab
	metkaa:
		sub eax,8479;
	jmp metkaad
	metkab:
		add eax,464;
	
metkaad:
	mov ebx,eax;
	and ebx,1111b;
    mov ecx,4;
cnt:    shr ebx,1;
    jnc nxt;
    inc count;
nxt:    loop cnt;

and count,1b;
cmp count,0;
	jl metkaaaaa
	jge metkaaaaab
metkaaaaa:
	mov bl,2;
	div bl;
jmp mmmk

metkaaaaab:
	xor eax,3985;
	
mmmk:

exit:

Invoke ExitProcess,1
End Start