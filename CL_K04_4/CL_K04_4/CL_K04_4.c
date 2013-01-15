/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題04_4 */

#include <stdio.h>

void main(void)
{
	char kurasu[5][4] = {"1T1", "1T2", "1T3", "1T4", "1T5"};
	char name[5][20] = {"佐藤", "鈴木", "石田", "小野寺", "山上"};
	int score[5][3];
	int i, j, y;
	double x;

	for (i = 0; i < 5; i++) 
	{
		for (j = 0; j < 3; j++)
		{
			printf("%s %sさんの%d科目目の点数を入れてください：", kurasu[i], name[i], j + 1);
			scanf("%d",&score[i][j]);
		}
	}
	for (j = 0; j < 3; j++)
	{
		x = 0.0;
		for (i = 0; i < 5; i++)
		{
			x = x + (double)score[i][j];
		}
		x = x / 5;
		printf("%d科目目の平均点は%.1f点\n", j + 1, x);
		x = -1;
		for(i = 0; i < 5; i++)
		{
			if (x < score[i][j])
			{
				x = (double)score[i][j];
				y = i;
			}
		}
		printf("%d科目目の最高点は%s %sさんで%d点です\n", j + 1, kurasu[y], name[y], score[y][j]);

	}



}