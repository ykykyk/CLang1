/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�02_2 */

#include <stdio.h>

void main(void) {
	int a, b;
	printf("a�̒l����͂��Ă��������F");
	scanf("%d",&a);
	printf("b�̒l����͂��Ă��������G");
	scanf("%d",&b);
	if (b != 0) {
		printf("%d��%d�Ŋ��������ʂ�%d�ł�\n", a, b, a / b);
		printf("%d��%d�Ŋ������]���%d�ł�\n", a, b, a % b);
	}else {
		printf("�G���[�F0�Ŋ��邱�Ƃ͂ł��܂���\n");
	}
}