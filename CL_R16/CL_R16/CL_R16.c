#include <stdio.h>
void setValue(int *, int *);

void main(void) 
{
	int x, y;
	x = 0;
	y = 0;
	printf("setValue�֐��̌Ăяo���O�F����%d, ����%d\n", x, y);
	setValue(&x, &y);
	printf("setValue�֐��̌Ăяo����F����%d, ����%d\n", x, y);
}
void setValue(int *px, int *py)
{
	*px = 123;
	*py = 456;
}