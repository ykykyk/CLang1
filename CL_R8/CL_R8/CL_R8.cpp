#include <stdio.h>

void main(void) 
{
	int y[3][3] = {{1, 2, 3},{2, 4, 6},{3, 6, 9}};
	int i, j;
	char w[5][10] = {"book", "pen", "desk", "computer", "chair"}; 

	printf("�z�񂙁F\n");
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", y[i][j]);
		}
		printf("\n");
	}

	printf("�z�񂗁F\n");
	for (i = 0; i< 5; i++)
	{
		printf("%s\n", w[i]);
	}
}