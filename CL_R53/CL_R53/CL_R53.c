#include <stdio.h>

void main(void)
{
	int x, i;
	int y[5] = {100, 200, 300, 400, 500};
	int *px, *py, *ppy;
	x = 123;
	px = &x;
	py = y;
	ppy = &y[0];
	printf("変数ｘのアドレス：%p番地\n", px);
	printf("変数ｘの値		：%d\n", x);
	printf("変数ｐｐｘのアドレス：%p番地\n", &x);
	printf("変数ｘの値		：%d\n", x);
	for (i = 0; i < 5; i++)
	{
		printf("変数ｙのアドレス：%p番地\n", py);
		printf("変数の値		：%d\n", y[i]);
		py++;
		printf("変数ｐｐｙのアドレス：%p番地\n", ppy);
		ppy++;
	}
}