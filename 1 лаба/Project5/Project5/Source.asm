.686
.model flat,stdcall
.stack 100h
.data
X dw -103;
Y dw -12;
M dw ?;
.code
ExitProcess PROTO STDCALL :DWORD
Start:
mov ax,Y;
shl ax,2;
mov cx,X;
sub cx,ax;
xor cx,Y;
mov M,cx;
exit:
Invoke ExitProcess,1
End Start