/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題06_1 */

#include <stdio.h>

int sigma(int);

void main(void)
{
	int i, j;
	printf("合計を求めたい数を入力してください：");
	scanf("%d", &i);
	j = sigma(i);
	printf("1から%dまでの合計は%dです\n", i, j);
}

int sigma(int i)
{
	int j, x;
	j = 0;
	for (x = 1; x <= i; x++)
	{
		j += x;
	}
	return j;
}