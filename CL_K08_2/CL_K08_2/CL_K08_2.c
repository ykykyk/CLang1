/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題08_2 */

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
		printf("エラー：ファイルが読み込めません\n");
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
		printf("メモリの確保に失敗しました\n");
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
		printf("リストのデータ：%d\n", current->data);
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