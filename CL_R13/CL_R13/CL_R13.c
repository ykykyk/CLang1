#include <stdio.h>

void main(void) {
	int i;
	printf("繰り返し　ここから\n");
	i = 1;
	while (i <= 3) {
		printf("繰り返し%d回目\n", i);
		i = i + 1;
	}
	printf("繰り返し　ここまで\n\n");

	printf("繰り返し　ここから\n");
	i = 3;
	while (i) {
		printf("繰り返し%d回目\n", i);
		i--;
	}
	printf("繰り返し　ここまで\n\n");

	printf("繰り返し　ここから\n");
	i = 1;
	do {
		printf("繰り返し%d回目\n", i);
		i = i + 1;
	} while (i <= 3);
	printf("繰り返し　ここまで\n\n");

}