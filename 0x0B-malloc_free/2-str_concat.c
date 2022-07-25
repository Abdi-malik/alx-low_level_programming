#include "main.h"

/**
 * str_concat -> string concatinating function
 * @s1: string 1
 * @s2: string 2
 * Return: concatinating string 1 and string 2
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, m = 0;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while ( s2[j])
		j++;

	m = i + j;
	string = (char *)malloc(m * sizeof(char) + 1);
	if (string == NULL)
		return (NULL);
	j = 0;
	while (k < 1)
	{
		if (k < i)
			string[k] = s1[k];
		if (k >= i)
		{
			string[k] = s2[j];
			j++;
		}
		k++;
	}
	string[k] = '\0';
	return (string);
}
