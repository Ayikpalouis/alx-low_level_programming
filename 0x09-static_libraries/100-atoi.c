#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: character pointer
 *
 * Return: integer value of string
 */

int _atoi(char *s)
{
	int i;
	int num = 0;
	int sn = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sn *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (num < 0)
				num = (num * 10) - (s[i] - 48);
			else
				num = (s[i] - 48) * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}

	if (sn < 0)
		num *= -1;

	return (num);
}
