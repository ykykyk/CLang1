/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題04_3 */

#include <stdio.h>

void main(void)
{
	int c[10], i;
	printf("奇数列：");
	for (i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			c[i] = 1;
		}
		else
		{
			c[i] = c[i - 1] + 2;
		}
		printf("%d、", c[i]);
	}
	printf("\n");
}