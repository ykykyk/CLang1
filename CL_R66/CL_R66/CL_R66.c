#include <stdio.h>

void main (void)
{
	int buf[10];
	int number, i, sum = 0;

	printf("���̓f�[�^�͉��ł����F");
	scanf("%d", &number);

	for (i = 0; i < number; i++)
	{
		printf("%d�ڂ̃f�[�^�F", i+1);
		scanf("%d", &buf[i]);
	}
	for (i = 0; i < number; i++)
	{
		sum += buf[i];
	}
	printf("���̓f�[�^�̍��v��%d�ł�\n", sum);
}