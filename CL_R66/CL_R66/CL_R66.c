#include <stdio.h>

void main (void)
{
	int buf[10];
	int number, i, sum = 0;

	printf("入力データは何個ですか：");
	scanf("%d", &number);

	for (i = 0; i < number; i++)
	{
		printf("%d個目のデータ：", i+1);
		scanf("%d", &buf[i]);
	}
	for (i = 0; i < number; i++)
	{
		sum += buf[i];
	}
	printf("入力データの合計は%dです\n", sum);
}