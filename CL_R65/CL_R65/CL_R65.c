#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
	/* �t�@�C������𗝉����邽�߂̗��K�v���O���� */
	// list.dat���g���܂�
	int ten;
	char name[1024];


	// �܂��̓t�@�C�����J��
	FILE *fp; // FILE *���`���A�t�@�C���|�C���^�Ƃ��ė��p����
	// fopen("�t�@�C����", "���[�h")
	// �t�@�C������������Ƃ��ĕϐ��ɂ���Ȃ�Afopen(�z��, "���[�h")�łn�j
	fp = fopen("list.dat", "w"); // fopen�̕ԋp�l�́A�G���[�Ȃ�NULL
	if (fp == NULL)
	{
		printf("�t�@�C����ǂݍ��߂܂���ł���\n");
		exit(1);
	}
	printf("�t�@�C�����ǂݍ��߂܂���\n");


	// �������݂܂�
	while (1)
	{
		printf("���O�F");
		scanf("%s", name);
		if (strcmp(name, "end") == 0) // ��r���ē����Ȃ甲����
		{
			break;
		}
		printf("�_���F");
		scanf("%d", &ten);
		fprintf(fp, "%s %d\n", name, ten); // fprintf�́i�|�C���^, "������", ���́j
	}
	// sprintf��fputs�̏�������
	sprintf(name, "�ȏ�\n"); // sprintf(�σA, "������", ����)
	fputs(name, fp); // fputs(�σA, �t�@�C��)

	fclose(fp); // �t�@�C�������

	// �ӂ����ъJ���i�ǂݍ��݃��[�h�Łj
	fopen("list.dat", "r");

	// �ǂݍ��݂܂�
	printf("�ǂݍ��ݓ��e�ł�\n");
	while (fscanf(fp, "%s %d", name, &ten) != EOF)
	{
		printf("%s %d\n", name , ten);
	}



}