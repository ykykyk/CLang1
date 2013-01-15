/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題02_4 */

#include <stdio.h>

void main(void){
	int year, month, flg, day;
	printf("年を入力してください：");
	scanf("%d",&year);
	printf("月を入力してください：");
	scanf("%d",&month);

	flg = 0;
	if (year % 400 == 0) {
		flg = 1;
	}else if(year % 100 == 0) {
		flg = 0;
	}else if(year % 4 == 0) {
		flg = 1;
	}

	switch (month) {
		case 2:
			day = 28;
			if (flg == 1) {
				day = day + 1;
			}
			break;
		case 4: case 6: case 9: case 11:
			day = 30;
			break;
		default:
			day = 31;
	}
	printf("%d年%d月は%d日までです\n", year, month, day);
}