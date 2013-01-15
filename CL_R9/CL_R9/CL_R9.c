#include <stdio.h>
#include <string.h>

void main(void) {
	char s[256] = "Ｃ言語";
	char t[256];
	printf("配列ｓ：%s\n", s);
	printf("配列ｔに複写中\n");
	strcpy (t, s);
	printf("配列ｔ：%s\n", t);
}