#include <stdio.h>
#include <string.h>

void main(void) {
	char s[256] = "�b����";
	char t[256];
	printf("�z�񂓁F%s\n", s);
	printf("�z�񂔂ɕ��ʒ�\n");
	strcpy (t, s);
	printf("�z�񂔁F%s\n", t);
}