#include <stdio.h>

int masu[3][3] = {2};


�@//�{�[�h������
�@//�^�[������
�@//�󂫃}�X����
�@//�{�[�h�\��
�@//���͑҂�
�@//���͂��ꂽ�}�X�𖄂߂�
�@//�Ђ�����Ԃ邩�̔���
�@//�S�����܂������̔���
�@//���܂�����Q�[�����ʂ̕\��
�@//���܂�Ȃ�������^�[������ɖ߂�

void turn_h(int*);
void hyouji(void);
void hyouji_h(int, int, int*);
void aki_h(void);

 void main(void)
{
	int turn = 1, aki = 9;

	printf("�`�@���~�Q�[���@�`\n\n");
	while (aki > 0)
	{
		turn_h(&turn);
		hyouji();
		aki_h();
		aki =- 1;
	}

}
void turn_h(int* turn)
{
	*turn = *turn ^ 1;
	if (turn == 0)
	{
		printf("���̔Ԃł�\n");
	}
	else
	{
		printf("�~�̔Ԃł�\n");
	}
}

void hyouji(void)
{
	int i, j, cnt = 0;
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			hyouji_h(i, j, &cnt);
		}
		printf("\n");
	}

}

void hyouji_h(int i, int j, int* cnt)
{
	if (masu[i][j] == 0)
	{
		printf("��");
	}
	else if (masu[i][j] == 1)
	{
		printf("�~");
	}
	else
	{
		switch (*cnt)
		{
		case 0:
			printf("�@");
			break;
		case 1:
			printf("�A");
			break;
		case 2:
			printf("�B");
			break;
		case 3:
			printf("�C");
			break;
		case 4:
			printf("�D");
			break;
		case 5:
			printf("�E");
			break;
		case 6:
			printf("�F");
			break;
		case 7:
			printf("�G");
			break;
		case 8:
			printf("�H");
		}
	}
}

void aki_h(void)
{
	
}