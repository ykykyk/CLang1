/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題02_3 */

#include <stdio.h>

void main(void) {
	int pencil;
	printf("鉛筆の数を入力してください：");
	scanf("%d",&pencil);
	if (pencil <= 0) {
		printf("エラー：かぞえられません\n");
		pencil = -1;
	}
	switch (pencil % 10) {
	case 2: case 4: case 5: case 7: case 9:
		printf("えんぴつのかずは、%dほんです\n", pencil);
		break;
	case 0: case 1: case 6: case 8:
		printf("えんぴつのかずは、%dぽんです\n", pencil);
		break;
	case 3:
		printf("えんぴつのかずは、%dぼんです\n", pencil);
		break;
	}
}