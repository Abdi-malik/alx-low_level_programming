#include "main.h"
/**
* print_line - prints dhash number of n
* @n: it will take from keyboard
*/

void print_line(int n)
{
	int i;

	scanf("%d\n", n);
	for (i = 1; i < n; i++)
{
	_putchar('_');
}
	_putchar('\n');
}
