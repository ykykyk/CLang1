/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�07_1 */

#include <stdio.h>

int inputValue10 (int);

void main(void)
{
	int x[10], sum, i;
	sum = inputValue10(x);
	printf("�z��̒l�F");
	for (i = 0; i < 9; i++)
	{
		printf("%d,", x[i]);
	}
	printf("%d\n", x[i]);
	printf("�z��ɓ��͂��ꂽ�l��%d�ł�\n", sum);
}

int inputValue10(int *x)
{
	int i, sum;
	sum = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d�Ԗڂ̗v�f����͂��Ă��������F", i+1);
		scanf("%d", &x[i]);
		sum += x[i];
	}
	return sum;
}