#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: character pointer to string to search through
 * @needle: character pointer of substring to search for.
 *
 * Return: character pointer to beginning of located substring,
 * or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[i + k] != '\0' && needle[j + k] != '\0'
			&& haystack[i + k] == needle[j + k])
		{
			if (haystack[i + k] != needle[j + k])
				break;
			k++;
		}
		if (needle[j + k] == '\0')
			return (haystack + i);
		j++;
	}

	return ('\0');
}
