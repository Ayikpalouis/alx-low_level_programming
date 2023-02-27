#include "main.h"

/**
 * puts2 - print every other character;
 * @str: character pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int ctr = 0;

	while (str[ctr] != '\0')
	{
		if (ctr % 2 == 0)
			_putchar(str[ctr]);
		ctr++;
	}

	_putchar('\n');
}
