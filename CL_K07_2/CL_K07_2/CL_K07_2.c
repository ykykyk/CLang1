/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題07_2 */

#include <stdio.h>

int strLenCmp (char *, char *);

void main(void)
{
	int i;
	char ch1[256], ch2[256];
	printf("１番目の文字列を入力してください：");
	scanf("%s", ch1);
	printf("２番目の文字列を入力してください：");
	scanf("%s", ch2);
	i = strLenCmp(ch1, ch2);
	printf("比較結果：\n");
	switch (i)
	{
	case 0:
		printf("文字列の長さは同じです\n");
		break;
	case 1:
		printf("１番目の文字列の方が長いです\n");
		break;
	case -1:
		printf("２番目の文字列の方が長いです\n");
	}
}

int strLenCmp(char *ch1, char *ch2)
{
	int s1, s2;
	for (s1 = 0; ch1[s1] != '\0'; s1++)
	{
	}
	for (s2 = 0; ch2[s2] != '\0'; s2++)
	{
	}
	if (s1 == s2)
	{
		return 0;
	}
	else if (s1 > s2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}