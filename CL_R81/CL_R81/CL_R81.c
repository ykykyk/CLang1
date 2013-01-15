#include <stdio.h>

void main (void)
{
	int a = 10, b, i;
	char bits[33];
	
	bits[32] = '\0';
	for (i = 0; 31 - i != -1; i ++)
	{
		a = a >> 1;
		if (a % 2 == 0)
		{
			bits[31 - i] = 48;
		}
		else
		{
			bits[31 - i] = 49;
		}
	}
	printf("%s", bits);
}