/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�06_3 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void gameStart(void);

void main(void)
{
	time_t t1, t2;
	time(&t1);
	gameStart();
	time(&t2);
	printf("�����������Ԃ�%.0f�b�ł�\n", difftime(t2, t1));

}

void gameStart(void)
{
	int kazu, kotae;
	srand((unsigned int)time(NULL));
	kotae = rand() % 100;
	while (1)
	{
		printf("���𓖂ĂĂ�������(0�`99)�F");
		scanf("%d", &kazu);
		if (kazu == kotae)
		{
			break;
		}
		else if(kazu < kotae)
		{
			printf("�������I");
			if (kotae - kazu <= 5)
			{
				printf("�������ɂ���");
			}
			else if (kotae - kazu <= 10)
			{
				printf("�ɂ���");
			}
			else if(kotae - kazu >= 50)
			{
				printf("�S�R�Ⴄ");
			}
		}
		else
		{
			printf("�傫���I");
			if (kazu - kotae <= 5)
			{
				printf("�������ɂ���");
			}
			else if (kazu - kotae <= 10)
			{
				printf("�ɂ���");
			}
			else if(kazu - kotae >= 50)
			{
				printf("�S�R�Ⴄ");
			}
		}
		printf("\n");
	}
	printf("�����I\n");
}