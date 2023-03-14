#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a copy of a string given as a parameter
* @str: character pointer to string to be copied
*
* Return: NULL is string is NULL, NULL is insufficient memory is
* available, or character pointer to duplicated string
*/

char *_strdup(char *str)
{
	int i = 0, j;
	char *arr;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	arr = malloc(sizeof(char) * i + 1);

	if (arr == 0)
		return (NULL);

	for (j = 0; j < i; j++)
		arr[j] = str[j];
	arr[j] = '\0';

	return (arr);
}
