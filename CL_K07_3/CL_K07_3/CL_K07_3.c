/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題07_3 */

#include <stdio.h>

void arySort(int *, int);

void main(void)
{
	int data[101], i, jun, *pdata;
	pdata = data;
	printf("整列方法を指定してください（０：昇順,１：降順）：");
	scanf("%d", &jun);
	while (jun != 0 && jun != 1)
	{
		printf("整列方法を指定してください（０：昇順,１：降順）：");
		scanf("%d", &jun);
	}
	printf("数値を入力（－１で終了）：");
	scanf("%d", &data[0]);
	for (i = 0; i < 100 && data[i] != -1;)
	{
		i++;
		printf("数値を入力（－１で終了）：");
		scanf("%d", &data[i]);
	}
	if (i == 100)
	{
		data[100] = -1;
	}
	arySort(data, jun);
}

void arySort (int *data, int jun)
{
	switch (jun)
	{
	case 0:

		break;
	case 1:

	}
}