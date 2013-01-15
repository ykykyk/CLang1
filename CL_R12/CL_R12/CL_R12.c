#include <stdio.h>

void main(void) {
	int age, n, eng, suu;
	printf("年齢を入力してください：");
	scanf("%d",&age);
	if (age >= 10 && age < 20) {
		printf("あなたは10代ですね！\n");
	}else {
		printf("あなたは10代ではありませんね。\n");
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
	printf("英語と数学の得点を入れてください");
	scanf("%d %d", &eng, &suu);
	printf("英語%d点,数学%d点で", eng, suu);
	if (eng >= 70 && suu >= 70) {
		printf("合格です");
	} else if (eng < 60 || suu < 60) {
		printf("不合格です");
	} else {
		printf("仮合格です");
	}
}
