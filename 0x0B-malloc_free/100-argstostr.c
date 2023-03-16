#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: argument count
 * @av: argument vector, i.e., array of arguments
 *
 * Return: NULL is ac is 0 or av is NULL, character pointer to
 * concatenated string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *str;

	i = j = k = 0;

	if (ac < 1)
		return (NULL);

	for (; i < ac; i++)
		for (; av[i][j] != '\0'; j++)
			size++;

	size -= 24;

	str = malloc(sizeof(char) * size);
	if (str == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}
