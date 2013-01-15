/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題05_1 */

#include <stdio.h>

struct data
{
	char name[256];
	double height;
	double weight;
};

void main(void)
{
	struct data sd = {"岩崎デジ太", 175.5, 73.2};
	printf ("測定結果：\n");
	printf("%s  %fcm、%fkg\n", sd.name, sd.height, sd.weight);
}