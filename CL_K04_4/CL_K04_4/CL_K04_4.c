/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�04_4 */

#include <stdio.h>

void main(void)
{
	char kurasu[5][4] = {"1T1", "1T2", "1T3", "1T4", "1T5"};
	char name[5][20] = {"����", "���", "�Γc", "���쎛", "�R��"};
	int score[5][3];
	int i, j, y;
	double x;

	for (i = 0; i < 5; i++) 
	{
		for (j = 0; j < 3; j++)
		{
			printf("%s %s�����%d�Ȗږڂ̓_�������Ă��������F", kurasu[i], name[i], j + 1);
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
		printf("%d�Ȗږڂ̕��ϓ_��%.1f�_\n", j + 1, x);
		x = -1;
		for(i = 0; i < 5; i++)
		{
			if (x < score[i][j])
			{
				x = (double)score[i][j];
				y = i;
			}
		}
		printf("%d�Ȗږڂ̍ō��_��%s %s�����%d�_�ł�\n", j + 1, kurasu[y], name[y], score[y][j]);

	}



}