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
	printf("成績：\n");
	for (i = 0; i < 4; i++)
	{
		dispSd(sdAry[i]);
	}
}

void inputSd(struct data *psd)
{
	int i;
	printf("氏名を入力してください：");
	scanf("%s", psd->name);
	for (i = 0; i < 3; i ++)
	{
		printf("%d番目の科目の得点を入力してください：", i+1);
		scanf("%d", &psd->score[i]);
	}
}

void dispSd (struct data sd)
{
	int i;
	printf("%s  ", sd.name);
	for (i = 0; i < 3; i++)
	{
		printf("%d番目の科目%d点", i+1, sd.score[i]);
	}
}