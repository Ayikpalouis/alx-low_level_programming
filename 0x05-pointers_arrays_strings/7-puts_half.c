#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: string character
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, j, len;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		len = i / 2;
	else
		len = ((i - 1) / 2) + 1;

	for (j = len; j < i; j++)
		_putchar(str[j]);

	_putchar('\n');
}
