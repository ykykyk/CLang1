/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題08_1 */

#include <stdio.h>
#include <stdlib.h>

int dispFileData (char);

int main (void)
{
	char fn[256];
	printf("ファイル名を入力してください：");
	scanf("%s", fn);
	dispFileData(fn);
}

int dispFileData (char *fn)
{
	FILE *fp;
	char s[1024];
	fp = fopen(fn, "r");
	if (fp == NULL)
	{
		printf("%sは見つかりません\n", fn);
		exit(1);
	}
	printf("%sの内容は次のとおりです\n", fn);
	while (fgets(s, 1024, fp) != NULL)
	{
		printf("%s", s);
	}
	printf("\n");
	fclose(fp);
	return(0);
}