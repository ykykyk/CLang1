#include <stdio.h>

int fact2(int x);

void main (void)
{
	int n, kai;
	printf("�K������߂����l�F");
	scanf("%d", &n);
	while (n < 0)
	{
		printf("0�ȏ����́F");
		scanf("%d", &n);
	}
	kai = fact2(n);
	printf("%d�̊K���%d\n", n, kai);
}

int fact2(int x)
{
	if (x <= 1)
	{
		return 1;
	}
	return (x * fact2(x - 1));
}