/* ì¬ÒF1T3(11) –Ø‘º—D—¢ */
/* ‰Û‘è–¼F‰Û‘è03_4 */

#include <stdio.h>

void main(void) {
	int i, j;
	for (i = 0; i < 10; i++) {
		if (i < 5) {
			for (j = i + 1; j > 0; j--){
				printf("–");
			}
		}else {
			j = 5 - (i - 5);
			while (i - 5 > 0) {
				printf("@");
				i = i - 1;
			}
			i = 10 - j;
			while (j > 0){
				printf("–");
				j--;
			}
		}
		printf("\n");
	}
}