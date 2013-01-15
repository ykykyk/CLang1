#include <stdio.h>

void main(void) 
{
	int  x[5] = {100, 101, 102, 103, 104};
	int i;
	int *px;
	px = x;
	for (i = 0; i < 5; i++)
	{
		printf("x[%d] = %d\n", i, *px);
		px++;
		// printf("x[%d] = %d\n", i, x[i]);
	}
}