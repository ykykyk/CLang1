/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題08_3 */

#include <stdio.h>
#include <stdlib.h>

struct List
{
	int data;
	struct List *next;
	struct List *back;
};
struct List *head = NULL;
struct List *tail = NULL;

void addList (int);
void dispList(void);
void delList(void);

int main(void)
{
	FILE *fp;
	int value;
	char fn[1024];

	printf("ファイル名を指定してください：");
	scanf("%s", fn);
	fp = fopen(fn, "r");
	if (fp == NULL)
	{
		printf("エラー：%sが読み込めません\n", fn);
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
	newdata->back = tail;
	newdata->next = NULL;
	tail = newdata;
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
	current = tail;
	while (current != NULL)
	{
		printf("リストのデータ：%d\n", current->data);
		current = current->back;
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