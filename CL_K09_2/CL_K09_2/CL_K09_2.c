/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�09_2 */

#include <stdio.h>
#include <stdlib.h>

int inputArray(char *, int *);

int main (void)
{
	char fn[1024];
	int x[100], i, j;

	printf("�t�@�C��������͂��Ă��������F");
	scanf("%s", fn);
	i = inputArray(fn, x);
	for(j = 0; j < i ; j ++)
	{
		printf("�z��[%d]�̒l�F%d\n", j + 1, x[j]);
	}
}

int inputArray(char *fn, int *x)
{
	FILE *fp;
	int i, j;
	fp = fopen(fn, "r");
	if (fp == NULL)
	{
		printf("%s���ǂݍ��߂܂���ł���\n", fn);
		exit(1);
	}
	for (i = 0; fscanf(fp, "%d", x) != EOF; i++)
	{
		x++;
	}
	return i;
}