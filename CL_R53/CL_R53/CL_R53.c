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
	printf("�ϐ����̃A�h���X�F%p�Ԓn\n", px);
	printf("�ϐ����̒l		�F%d\n", x);
	printf("�ϐ��������̃A�h���X�F%p�Ԓn\n", &x);
	printf("�ϐ����̒l		�F%d\n", x);
	for (i = 0; i < 5; i++)
	{
		printf("�ϐ����̃A�h���X�F%p�Ԓn\n", py);
		printf("�ϐ��̒l		�F%d\n", y[i]);
		py++;
		printf("�ϐ��������̃A�h���X�F%p�Ԓn\n", ppy);
		ppy++;
	}
}