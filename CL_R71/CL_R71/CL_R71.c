#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char name[256];
	int score[4], i;
	fp = fopen("list.dat", "w");
	if (fp == NULL)
	{
		printf("エラー：ファイルlist.datを作成できません。\n");
		exit(1);
	}
	fprintf(fp, "～試験結果～\n");
	while (1)
	{
		printf("氏名を入力してください		：");
		scanf("%s", name);
		if (strcmp(name, "end") != 0)
		{
			for (i = 0; i < 3; i ++)
			{
				printf("%d教科目の点数を入力してください：", i + 1);
				scanf("%d", &score[i]);
			}
			score[4] = score[0] + score[1] + score[2];
			fprintf(fp, "%s %d %d %d %d\n", name, score[0], score[1], score[2], score[4]);
		}
		else
		{
			break;
		}
	}
	fclose(fp);
	return 0;
}