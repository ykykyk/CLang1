#include <stdio.h>
#include <stdlib.h>

void addList (int);
void dispList(void);

struct List
{
	int data;
	struct List *next;
};
struct List *head = NULL;

void main (void)
{
	int i, value;
	for (i = 0; i < 10; i++)
	{
		printf("リストに追加する要素の値を入力してください：");
		scanf("%d", &value);
		addList(value);
	}
	printf("\n");
	dispList();
}

void addList (int value)
{
	struct List *current, *newdata;
	newdata = (struct List *)malloc(sizeof(struct List));
	if (mewdata == NULL)
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