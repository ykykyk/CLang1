#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
	/* ファイル操作を理解するための練習プログラム */
	// list.datを使います
	int ten;
	char name[1024];


	// まずはファイルを開く
	FILE *fp; // FILE *を定義し、ファイルポインタとして利用する
	// fopen("ファイル名", "モード")
	// ファイル名が文字列として変数にあるなら、fopen(配列名, "モード")でＯＫ
	fp = fopen("list.dat", "w"); // fopenの返却値は、エラーならNULL
	if (fp == NULL)
	{
		printf("ファイルを読み込めませんでした\n");
		exit(1);
	}
	printf("ファイルが読み込めました\n");


	// 書き込みます
	while (1)
	{
		printf("名前：");
		scanf("%s", name);
		if (strcmp(name, "end") == 0) // 比較して同じなら抜ける
		{
			break;
		}
		printf("点数：");
		scanf("%d", &ten);
		fprintf(fp, "%s %d\n", name, ten); // fprintfは（ポインタ, "文字列", 実体）
	}
	// sprintfとfputsの書き込み
	sprintf(name, "以上\n"); // sprintf(変ア, "文字列", 実体)
	fputs(name, fp); // fputs(変ア, ファイル)

	fclose(fp); // ファイルを閉じる

	// ふたたび開く（読み込みモードで）
	fopen("list.dat", "r");

	// 読み込みます
	printf("読み込み内容です\n");
	while (fscanf(fp, "%s %d", name, &ten) != EOF)
	{
		printf("%s %d\n", name , ten);
	}



}