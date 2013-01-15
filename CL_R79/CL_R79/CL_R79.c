#include <stdio.h>

int fact1(int x);

void main (void)
{
	int n, kai;
	printf("階乗を求めたい値：");
	scanf("%d", &n);
	while (n < 0)
	{
		printf("0以上の値を入力：");
		scanf("%d", &n);
	}
	kai = fact1(n);
	printf("%dの階乗は%dです\n", n, kai);
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