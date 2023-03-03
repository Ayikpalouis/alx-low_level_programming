#include "main.h"

/**
 * print_number - print integer using _putchar
 * @n: integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int val, p, flag;

	val = n;
	p = 1;
	flag = 0;

	if (n < 0)
	{
		_putchar('-');
		flag = 1;
	}

	while (val > 9 || val < -9)
	{
		p *= 10;
		val /= 10;
	}

	while (p > 0)
	{
		if (p > 9)
		{
			if (!flag)
				_putchar((n / p % 10) + '0');
			else
				_putchar((n / p % 10) * -1 + '0');

			p /= 10;
		}

		if (p == 1)
		{
			if (flag)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			p = 0;
		}
	}
}
