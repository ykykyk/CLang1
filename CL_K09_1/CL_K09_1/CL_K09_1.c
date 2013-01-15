/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題09_1 */

#include <stdio.h>

int fibonacci (int);

void main (void)
{
	int n, ans;
	printf("フィボナッチ数列の何番目の値を求めますか（０以上）：");
	scanf("%d", &n);
	while (n < 0)
	{
		printf("エラー：０以上の値を入力してください\n");
		printf("フィボナッチ数列の何番目の値を求めますか（０以上）：");
		scanf("%d", &n);
	}
	ans = fibonacci(n);
	printf("フィボナッチ数列F(%d)の値は%dです\n", n, ans);
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