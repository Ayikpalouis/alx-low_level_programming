#include "main.h"

/**
 * *cap_string - capitalize all words
 * @str: character pointer to string
 *
 * Return: capitalized pointer to string
 */

char *cap_string(char *str)
{
	int i = 1, j;
	int sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if ((str[0] > 96) && (str[0] < 123))
		str[0] -= 32;

	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sep[j])
			{
				if ((str[i + 1] > 96) && (str[i + 1] < 123))
					str[i + 1] -= 32;
				break;
			}
		}
		i++;
	}

	return (str);
}
