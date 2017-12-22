#include <stdio.h>
#include <dos.h>

void display_string()
{
	asm mov ah, 02h
	asm mov dl, 'a'
	asm int 21h

	asm mov dl, 'b'
	asm int 21h

	asm mov dl, 'c'
	asm int 21h
}

void set_video_mode(int mode)
{
	asm mov ah, 00h
	if (mode == 0)
	{
		asm mov al, 00h
	}
	else
	{
		asm mov al, 03h
	}
	asm int 10h
}

void main()
{
	set_video_mode(1);
	display_string();
}
