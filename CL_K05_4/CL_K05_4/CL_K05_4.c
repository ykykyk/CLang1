/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題05_3 */

#include <stdio.h>

struct data
{
	char name[256];
	double height;
	double weight;
};

void main(void)
{
	struct data sdAry[4] = {
		{"岩崎デジ太", 175.5, 73.2},
		{"岩崎ハマ子", 153.3, 49.5},
		{"岩崎太郎", 167.7, 80.3},
		{"岩崎花子", 162.0, 47.9}
	};
	int i;
	double w;
	printf ("測定結果：\n");
	for (i = 0; i < 4; i++)
	{
		w = (sdAry[i].height / 100.0) * (sdAry[i].height / 100.0);
		printf("%-10s  %fcm、%fkgのBMI指数は、", sdAry[i].name, sdAry[i].height, sdAry[i].weight);
		if (sdAry[i].weight / w < 18.5)
		{
			printf("やせ体型です\n");
		}
		else if(sdAry[i].weight / w < 25.0)
		{
			printf("標準体型です\n");
		}
		else
		{
			printf("肥満体型です\n");
		}
	}
}