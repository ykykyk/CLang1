#include <stdio.h>
#include <stdlib.h>
int sum (int x, int y);
int func(int a);

void main (void)
{
	int s;
	printf("s‚ÌƒAƒhƒŒƒX:%p\n", &s);
	s = sum(3, 5);
	printf("s=%d\n", s);
	s = func(10);
	printf("s=%d\n", s);
}

int sum (int x, int y)
{
}