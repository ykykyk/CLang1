/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�09_1 */

#include <stdio.h>

int fibonacci (int);

void main (void)
{
	int n, ans;
	printf("�t�B�{�i�b�`����̉��Ԗڂ̒l�����߂܂����i�O�ȏ�j�F");
	scanf("%d", &n);
	while (n < 0)
	{
		printf("�G���[�F�O�ȏ�̒l����͂��Ă�������\n");
		printf("�t�B�{�i�b�`����̉��Ԗڂ̒l�����߂܂����i�O�ȏ�j�F");
		scanf("%d", &n);
	}
	ans = fibonacci(n);
	printf("�t�B�{�i�b�`����F(%d)�̒l��%d�ł�\n", n, ans);
}

int fibonacci (int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if(n <= 2)
	{
		return 1;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}