#include "main.h"
/**
* print_line - prints dhash number of n
* @n: it will take from keyboard
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	_putchar('\n');
	else
{
	for (i = 0; i < n; i++)
	_putchar(95);
	_putchar('\n');
}
}
