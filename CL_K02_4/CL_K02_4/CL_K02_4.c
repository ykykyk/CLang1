/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�02_4 */

#include <stdio.h>

void main(void){
	int year, month, flg, day;
	printf("�N����͂��Ă��������F");
	scanf("%d",&year);
	printf("������͂��Ă��������F");
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
	printf("%d�N%d����%d���܂łł�\n", year, month, day);
}