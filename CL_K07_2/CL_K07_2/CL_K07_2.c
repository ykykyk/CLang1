/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�07_2 */

#include <stdio.h>

int strLenCmp (char *, char *);

void main(void)
{
	int i;
	char ch1[256], ch2[256];
	printf("�P�Ԗڂ̕��������͂��Ă��������F");
	scanf("%s", ch1);
	printf("�Q�Ԗڂ̕��������͂��Ă��������F");
	scanf("%s", ch2);
	i = strLenCmp(ch1, ch2);
	printf("��r���ʁF\n");
	switch (i)
	{
	case 0:
		printf("������̒����͓����ł�\n");
		break;
	case 1:
		printf("�P�Ԗڂ̕�����̕��������ł�\n");
		break;
	case -1:
		printf("�Q�Ԗڂ̕�����̕��������ł�\n");
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