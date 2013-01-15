/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�08_2 */

#include <stdio.h>
#include <stdlib.h>

struct List
{
	int data;
	struct List *next;
};
struct List *head = NULL;

void addList (int);
void dispList(void);
void delList(void);

int main(void)
{
	FILE *fp;
	int value;
	fp = fopen("CL_K08_2.txt", "r");
	if (fp == NULL)
	{
		printf("�G���[�F�t�@�C�����ǂݍ��߂܂���\n");
		exit(1);
	}
	while (fscanf(fp, "%d", &value) != EOF)
	{
		addList(value);
	}
	dispList();
	delList();
}


void addList (int value)
{
	struct List *current, *newdata;
	newdata = (struct List *)malloc(sizeof(struct List));
	if (newdata == NULL)
	{
		printf("�������̊m�ۂɎ��s���܂���\n");
		return;
	}
	newdata->data = value;
	newdata->next = NULL;
	if (head == NULL)
	{
		head = newdata;
		return;
	}
	current = head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newdata;
}

void dispList(void)
{
	struct List *current;
	current = head;
	while (current != NULL)
	{
		printf("���X�g�̃f�[�^�F%d\n", current->data);
		current = current->next;
	}
}

void delList(void)
{
	struct List *current, *nextdata;
	current = head;
	while (current != NULL)
	{
		nextdata = current->next;
		free(current);
		current = nextdata;
	}
	head = NULL;
}