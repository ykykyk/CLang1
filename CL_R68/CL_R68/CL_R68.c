#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	FILE *fp;
	fp = fopen("list.dat", "r");
	if (fp == NULL)
	{
		printf("エラー：ファイルlist.datが存在しません。\n");
		exit(1);
	}
	/* ここにファイル入出力の命令群を記述する */
	fclose(fp);
	return 0;
}