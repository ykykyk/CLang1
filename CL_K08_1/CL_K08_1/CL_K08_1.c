/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�08_1 */

#include <stdio.h>
#include <stdlib.h>

int dispFileData (char);

int main (void)
{
	char fn[256];
	printf("�t�@�C��������͂��Ă��������F");
	scanf("%s", fn);
	dispFileData(fn);
}

int dispFileData (char *fn)
{
	FILE *fp;
	char s[1024];
	fp = fopen(fn, "r");
	if (fp == NULL)
	{
		printf("%s�͌�����܂���\n", fn);
		exit(1);
	}
	printf("%s�̓��e�͎��̂Ƃ���ł�\n", fn);
	while (fgets(s, 1024, fp) != NULL)
	{
		printf("%s", s);
	}
	printf("\n");
	fclose(fp);
	return(0);
}