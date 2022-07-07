#include "main.h"
/**
* print_diagonal - prints back slash diagonal
* @n: is the size of the diagonal it takes from keywoard
*/

void print_diagonal(int n)
{
	int i;

	scanf("%d\n" n);

	for (i = 0; i < n; i++)
{
	_putchar("'\'\n''");
}
	_putchar('\n');
}
