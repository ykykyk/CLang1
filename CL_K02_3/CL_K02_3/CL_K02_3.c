/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�02_3 */

#include <stdio.h>

void main(void) {
	int pencil;
	printf("���M�̐�����͂��Ă��������F");
	scanf("%d",&pencil);
	if (pencil <= 0) {
		printf("�G���[�F���������܂���\n");
		pencil = -1;
	}
	switch (pencil % 10) {
	case 2: case 4: case 5: case 7: case 9:
		printf("����҂̂����́A%d�ق�ł�\n", pencil);
		break;
	case 0: case 1: case 6: case 8:
		printf("����҂̂����́A%d�ۂ�ł�\n", pencil);
		break;
	case 3:
		printf("����҂̂����́A%d�ڂ�ł�\n", pencil);
		break;
	}
}