/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�06_1 */

#include <stdio.h>

int sigma(int);

void main(void)
{
	int i, j;
	printf("���v�����߂���������͂��Ă��������F");
	scanf("%d", &i);
	j = sigma(i);
	printf("1����%d�܂ł̍��v��%d�ł�\n", i, j);
}

int sigma(int i)
{
	int j, x;
	j = 0;
	for (x = 1; x <= i; x++)
	{
		j += x;
	}
	return j;
}