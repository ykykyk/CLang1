#include <stdio.h>

int fact2(int x);

void main (void)
{
	int n, kai;
	printf("階乗を求めたい値：");
	scanf("%d", &n);
	while (n < 0)
	{
		printf("0以上を入力：");
		scanf("%d", &n);
	}
	kai = fact2(n);
	printf("%dの階乗は%d\n", n, kai);
}

int fact2(int x)
{
	if (x <= 1)
	{
		return 1;
	}
	return (x * fact2(x - 1));
}