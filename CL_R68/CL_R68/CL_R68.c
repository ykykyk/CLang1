#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	FILE *fp;
	fp = fopen("list.dat", "r");
	if (fp == NULL)
	{
		printf("�G���[�F�t�@�C��list.dat�����݂��܂���B\n");
		exit(1);
	}
	/* �����Ƀt�@�C�����o�̖͂��ߌQ���L�q���� */
	fclose(fp);
	return 0;
}