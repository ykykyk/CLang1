/* ì¬ÒF1T3(11) ØºD¢ */
/* Ûè¼FÛè05_3 */

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
		{"âèfW¾", 175.5, 73.2},
		{"âèn}q", 153.3, 49.5},
		{"âè¾Y", 167.7, 80.3},
		{"âèÔq", 162.0, 47.9}
	};
	int i;
	double w;
	printf ("ªèÊF\n");
	for (i = 0; i < 4; i++)
	{
		w = (sdAry[i].height / 100.0) * (sdAry[i].height / 100.0);
		printf("%-10s  %fcmA%fkgÌBMIwÍA", sdAry[i].name, sdAry[i].height, sdAry[i].weight);
		if (sdAry[i].weight / w < 18.5)
		{
			printf("â¹Ì^Å·\n");
		}
		else if(sdAry[i].weight / w < 25.0)
		{
			printf("WÌ^Å·\n");
		}
		else
		{
			printf("ìÌ^Å·\n");
		}
	}
}