#include <stdio.h>

void inputSd(struct data *psd);
void dispSd (struct data sd);
struct data 
{
	int score[3];
	char name[256];
};

void main (void)
{
	struct data sdAry[4];
	int i;
	for (i = 0; i < 4; i++)
	{
		inputSd(&sdAry[i]);
	}
	printf("���сF\n");
	for (i = 0; i < 4; i++)
	{
		dispSd(sdAry[i]);
	}
}

void inputSd(struct data *psd)
{
	int i;
	printf("��������͂��Ă��������F");
	scanf("%s", psd->name);
	for (i = 0; i < 3; i ++)
	{
		printf("%d�Ԗڂ̉Ȗڂ̓��_����͂��Ă��������F", i+1);
		scanf("%d", &psd->score[i]);
	}
}

void dispSd (struct data sd)
{
	int i;
	printf("%s  ", sd.name);
	for (i = 0; i < 3; i++)
	{
		printf("%d�Ԗڂ̉Ȗ�%d�_", i+1, sd.score[i]);
	}
}