#include <stdio.h>

void main(void) {
	int i;
	printf("�J��Ԃ��@��������\n");
	i = 1;
	while (i <= 3) {
		printf("�J��Ԃ�%d���\n", i);
		i = i + 1;
	}
	printf("�J��Ԃ��@�����܂�\n\n");

	printf("�J��Ԃ��@��������\n");
	i = 3;
	while (i) {
		printf("�J��Ԃ�%d���\n", i);
		i--;
	}
	printf("�J��Ԃ��@�����܂�\n\n");

	printf("�J��Ԃ��@��������\n");
	i = 1;
	do {
		printf("�J��Ԃ�%d���\n", i);
		i = i + 1;
	} while (i <= 3);
	printf("�J��Ԃ��@�����܂�\n\n");

}