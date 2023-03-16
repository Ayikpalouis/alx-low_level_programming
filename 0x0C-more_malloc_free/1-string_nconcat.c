#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: character pointer to first string
 * @s2: character pointer to second string
 * @n: bytes of second string to add to first string
 *
 * Return: NULL if function fails, else pointer to allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k, str_len;
	char *str;

	i = j = k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	str_len = i + n + 1;

	str = malloc(sizeof(char) * str_len);

	if (str == NULL)
		return (NULL);

	for (; j < str_len - 1; j++)
	{
		if (j < i)
			str[j] = s1[j];
		else
			str[j] = s2[k++];
	}
	str[j] = '\0';

	return (str);
}
