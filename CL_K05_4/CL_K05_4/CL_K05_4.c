/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�05_3 */

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
	double w;
	printf ("���茋�ʁF\n");
	for (i = 0; i < 4; i++)
	{
		w = (sdAry[i].height / 100.0) * (sdAry[i].height / 100.0);
		printf("%-10s  %fcm�A%fkg��BMI�w���́A", sdAry[i].name, sdAry[i].height, sdAry[i].weight);
		if (sdAry[i].weight / w < 18.5)
		{
			printf("�₹�̌^�ł�\n");
		}
		else if(sdAry[i].weight / w < 25.0)
		{
			printf("�W���̌^�ł�\n");
		}
		else
		{
			printf("�얞�̌^�ł�\n");
		}
	}
}