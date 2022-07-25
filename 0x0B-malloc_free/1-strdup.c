#include "main.h"
/**
 * _strdup -> string duplicator function
 * @str: string to be duplicated
 * Return: a string pointer
 */

char *_strdup(char *str)
{
	int i = 1;
	int j = 0;
	char *string;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	string = (char *)malloc(i * sizeof(char) + 1);
	if (string == NULL)
		return (NULL);
	while (j < i)
	{
		string[j] = str[j];
		j++;
	}
	string[j] = '\0';
	return (string);
}
