#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char name[256];
	int scoreE, scoreM, scoreJ;
	fp = fopen("list.dat", "r");
	if (fp == NULL)
	{
		printf("�G���[�F�t�@�C��list.dat�����݂��܂���");
		exit(1);
	}
	while (fscanf(fp, "%s %d %d %d", name, &scoreE, &scoreM, &scoreJ) != EOF)
	{
		printf("%-10s  ", name);
		printf("�p��%d�_", scoreE);
		printf("���w%d�_", scoreM);
		printf("����%d�_\n", scoreJ);
	}
	fclose (fp);
	return 0;
}