/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�03_3 */

#include <stdio.h>

void main(void) {
	int i, j;
	j = 1;
	for (i = 2; i <= 10; i = i + 1) {
		j = j * i;
	}
	printf("10�̊K���%d�ł��B\n", j);
}