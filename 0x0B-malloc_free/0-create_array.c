#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create an array of chars, initialized with a specific
 * char
 * @size: size of the array
 * @c: specified character
 *
 * Return: NULL if size is 0, pointer to the array, or null if it fails
 */

char  *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
