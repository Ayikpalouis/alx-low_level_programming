#include "main.h"

/**
 * main - Entry point
 *
 * Description: Program prints a specified string using a custum function.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0;
	int str_len = sizeof(str) / sizeof(char);

	while (i < str_len - 1)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
