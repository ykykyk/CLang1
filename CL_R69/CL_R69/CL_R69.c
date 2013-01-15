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
		printf("エラー：ファイルlist.datが存在しません");
		exit(1);
	}
	while (fscanf(fp, "%s %d %d %d", name, &scoreE, &scoreM, &scoreJ) != EOF)
	{
		printf("%-10s  ", name);
		printf("英語%d点", scoreE);
		printf("数学%d点", scoreM);
		printf("国語%d点\n", scoreJ);
	}
	fclose (fp);
	return 0;
}