/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�05_1 */

#include <stdio.h>

struct data
{
	char name[256];
	double height;
	double weight;
};

void main(void)
{
	struct data sd = {"���f�W��", 175.5, 73.2};
	printf ("���茋�ʁF\n");
	printf("%s  %fcm�A%fkg\n", sd.name, sd.height, sd.weight);
}