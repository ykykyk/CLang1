/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�04_3 */

#include <stdio.h>

void main(void)
{
	int c[10], i;
	printf("���F");
	for (i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			c[i] = 1;
		}
		else
		{
			c[i] = c[i - 1] + 2;
		}
		printf("%d�A", c[i]);
	}
	printf("\n");
}