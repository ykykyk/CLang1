#include <stdio.h>

void main(void) {
	int i;
	printf("繰り返しここから\n");
	for (i = 1; i <= 3; i++) {
		printf("繰り返し%d\n", i);
	}
	printf("繰り返しここまで\n");
}