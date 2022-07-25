#include "main.h"
/**
 * create_array -> creating array
 * @size: size of array to be created
 * @c: character an array is initialized with
 * Return: a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return(NULL);
	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
