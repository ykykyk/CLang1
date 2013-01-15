#include <stdio.h>

void main(void) {
	int i;
	printf("ŒJ‚è•Ô‚µ@‚±‚±‚©‚ç\n");
	i = 1;
	while (i <= 3) {
		printf("ŒJ‚è•Ô‚µ%d‰ñ–Ú\n", i);
		i = i + 1;
	}
	printf("ŒJ‚è•Ô‚µ@‚±‚±‚Ü‚Å\n\n");

	printf("ŒJ‚è•Ô‚µ@‚±‚±‚©‚ç\n");
	i = 3;
	while (i) {
		printf("ŒJ‚è•Ô‚µ%d‰ñ–Ú\n", i);
		i--;
	}
	printf("ŒJ‚è•Ô‚µ@‚±‚±‚Ü‚Å\n\n");

	printf("ŒJ‚è•Ô‚µ@‚±‚±‚©‚ç\n");
	i = 1;
	do {
		printf("ŒJ‚è•Ô‚µ%d‰ñ–Ú\n", i);
		i = i + 1;
	} while (i <= 3);
	printf("ŒJ‚è•Ô‚µ@‚±‚±‚Ü‚Å\n\n");

}