/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題07_1 */

#include <stdio.h>

int inputValue10 (int);

void main(void)
{
	int x[10], sum, i;
	sum = inputValue10(x);
	printf("配列の値：");
	for (i = 0; i < 9; i++)
	{
		printf("%d,", x[i]);
	}
	printf("%d\n", x[i]);
	printf("配列に入力された値は%dです\n", sum);
}

int inputValue10(int *x)
{
	int i, sum;
	sum = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d番目の要素を入力してください：", i+1);
		scanf("%d", &x[i]);
		sum += x[i];
	}
	return sum;
}