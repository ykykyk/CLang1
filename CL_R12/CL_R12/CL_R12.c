#include <stdio.h>

void main(void) {
	int age, n, eng, suu;
	printf("�N�����͂��Ă��������F");
	scanf("%d",&age);
	if (age >= 10 && age < 20) {
		printf("���Ȃ���10��ł��ˁI\n");
	}else {
		printf("���Ȃ���10��ł͂���܂���ˁB\n");
	}
	printf("\n");

	n = 1;
	switch (n) {
	case 0:
		printf("Good Morning!\n");
		break;
	case 1:
		printf("Good Afternoon!\n");
		break;
	case 2:
		printf("Good Evening!\n");
		break;
	default:
		printf("Good Nigft!\n");
	}

	printf("\n");
	printf("�p��Ɛ��w�̓��_�����Ă�������");
	scanf("%d %d", &eng, &suu);
	printf("�p��%d�_,���w%d�_��", eng, suu);
	if (eng >= 70 && suu >= 70) {
		printf("���i�ł�");
	} else if (eng < 60 || suu < 60) {
		printf("�s���i�ł�");
	} else {
		printf("�����i�ł�");
	}
}
