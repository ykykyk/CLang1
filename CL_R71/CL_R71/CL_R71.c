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
		printf("�G���[�F�t�@�C��list.dat���쐬�ł��܂���B\n");
		exit(1);
	}
	fprintf(fp, "�`�������ʁ`\n");
	while (1)
	{
		printf("��������͂��Ă�������		�F");
		scanf("%s", name);
		if (strcmp(name, "end") != 0)
		{
			for (i = 0; i < 3; i ++)
			{
				printf("%d���Ȗڂ̓_������͂��Ă��������F", i + 1);
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