#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main- n is random and each time it is executed
*prints random and
*tells what integer n value is
*Return: return 0 stops and come out of the program
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
printf("%d is zero\n", $n);
if (n > 0)
printf("%d is positive\n", $n);
if (n < 0)
printf("%d is negative\n", $n);
return (0);
}
