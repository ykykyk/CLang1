/* ì¬ÒF1T3(11) ØºD¢ */
/* Ûè¼FÛè05_1 */

#include <stdio.h>

struct data
{
	char name[256];
	double height;
	double weight;
};

void main(void)
{
	struct data sd = {"âèfW¾", 175.5, 73.2};
	printf ("ªèÊF\n");
	printf("%s  %fcmA%fkg\n", sd.name, sd.height, sd.weight);
}