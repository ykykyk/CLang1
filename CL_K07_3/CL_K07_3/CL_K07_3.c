/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�07_3 */

#include <stdio.h>

void arySort(int *, int);

void main(void)
{
	int data[101], i, jun, *pdata;
	pdata = data;
	printf("������@���w�肵�Ă��������i�O�F����,�P�F�~���j�F");
	scanf("%d", &jun);
	while (jun != 0 && jun != 1)
	{
		printf("������@���w�肵�Ă��������i�O�F����,�P�F�~���j�F");
		scanf("%d", &jun);
	}
	printf("���l����́i�|�P�ŏI���j�F");
	scanf("%d", &data[0]);
	for (i = 0; i < 100 && data[i] != -1;)
	{
		i++;
		printf("���l����́i�|�P�ŏI���j�F");
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