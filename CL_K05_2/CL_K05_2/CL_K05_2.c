/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�05_2 */

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
		{"���f�W��", 175.5, 73.2},
		{"���n�}�q", 153.3, 49.5},
		{"��葾�Y", 167.7, 80.3},
		{"���Ԏq", 162.0, 47.9}
	};
	int i;
	printf ("���茋�ʁF\n");
	for (i = 0; i < 4; i++)
	{
	printf("%-10s  %fcm�A%fkg\n", sdAry[i].name, sdAry[i].height, sdAry[i].weight);
	}
}