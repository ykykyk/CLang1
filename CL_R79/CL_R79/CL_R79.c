#include <stdio.h>

int fact1(int x);

void main (void)
{
	int n, kai;
	printf("�K������߂����l�F");
	scanf("%d", &n);
	while (n < 0)
	{
		printf("0�ȏ�̒l����́F");
		scanf("%d", &n);
	}
	kai = fact1(n);
	printf("%d�̊K���%d�ł�\n", n, kai);
}

int fact1 (int x)
{
	int ans = 1, i;
	if (x >= 2)
	{
		for (i = 2; i <= x; i ++)
		{
			ans = ans * i;
		}
	}
	return ans;
}