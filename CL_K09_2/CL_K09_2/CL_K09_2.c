/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題09_2 */

#include <stdio.h>
#include <stdlib.h>

int inputArray(char *, int *);

int main (void)
{
	char fn[1024];
	int x[100], i, j;

	printf("ファイル名を入力してください：");
	scanf("%s", fn);
	i = inputArray(fn, x);
	for(j = 0; j < i ; j ++)
	{
		printf("配列ｘ[%d]の値：%d\n", j + 1, x[j]);
	}
}

int inputArray(char *fn, int *x)
{
	FILE *fp;
	int i, j;
	fp = fopen(fn, "r");
	if (fp == NULL)
	{
		printf("%sが読み込めませんでした\n", fn);
		exit(1);
	}
	for (i = 0; fscanf(fp, "%d", x) != EOF; i++)
	{
		x++;
	}
	return i;
}