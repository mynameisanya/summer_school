#include <stdio.h>

int main()
{
int v =  0xDDEEBBAA;
unsigned char p;
int i;
	
for (i = 0; i < 32; i+=8)
{ 
	if (16 == i)
	{
		p = ((v >> i) & 0xCC); 
		printf ("%#x\n", p);
	}
	else
	{
		p = ((v >> i) & 0xFF);
		printf ("%#x\n", p);
	}
}
}
