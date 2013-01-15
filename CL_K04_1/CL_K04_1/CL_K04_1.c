/* ì¬ÒF1T3(11) –Ø‘º—D—¢ */
/* ‰Û‘è–¼F‰Û‘è04_1 */

#include <stdio.h>

void main(void)
{
	int a[5], i, j;
	j = 0;
	for (i = 0; i < 5; i++)
	{
		a[i] = j;
		j = j + 10;
		printf("a[%d] = %d\n", i, a[i]);
	}
}