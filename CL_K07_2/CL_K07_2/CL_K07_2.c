/* ì¬ÒF1T3(11) –Ø‘º—D—¢ */
/* ‰Û‘è–¼F‰Û‘è07_2 */

#include <stdio.h>

int strLenCmp (char *, char *);

void main(void)
{
	int i;
	char ch1[256], ch2[256];
	printf("‚P”Ô–Ú‚Ì•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", ch1);
	printf("‚Q”Ô–Ú‚Ì•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", ch2);
	i = strLenCmp(ch1, ch2);
	printf("”äŠrŒ‹‰ÊF\n");
	switch (i)
	{
	case 0:
		printf("•¶š—ñ‚Ì’·‚³‚Í“¯‚¶‚Å‚·\n");
		break;
	case 1:
		printf("‚P”Ô–Ú‚Ì•¶š—ñ‚Ì•û‚ª’·‚¢‚Å‚·\n");
		break;
	case -1:
		printf("‚Q”Ô–Ú‚Ì•¶š—ñ‚Ì•û‚ª’·‚¢‚Å‚·\n");
	}
}

int strLenCmp(char *ch1, char *ch2)
{
	int s1, s2;
	for (s1 = 0; ch1[s1] != '\0'; s1++)
	{
	}
	for (s2 = 0; ch2[s2] != '\0'; s2++)
	{
	}
	if (s1 == s2)
	{
		return 0;
	}
	else if (s1 > s2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}