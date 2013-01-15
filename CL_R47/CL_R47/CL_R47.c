#include <stdio.h>

void appendStr (char s[]);

void main(void)
{
	char s[256] = "C ";
	appendStr(s);
	printf("%s\n", s);
}

void appendStr (char s[])
{
	char t[256];
	int i, j;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", t);
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; i + j + 1 < 256 && t[j] != '\0'; j++)
	{
		s[i + j] = t[j];
	}
	s[i + j] = '\0';
}