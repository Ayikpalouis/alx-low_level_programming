#include "main.h"

/**
 * print_times_table - print n by n times-table
 * @n: size of the table
 *
 */
void print_times_table(int n)
{
	int row, column, multiply;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				multiply = row * column;
				if (column == 0)
					_putchar('0');
				else if (multiply < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((multiply % 10) + '0');
				}
				else if (multiply >= 10 && multiply < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((multiply / 10) % 10) + '0');
					_putchar((multiply % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((multiply / 100) + '0');
					_putchar(((multiply / 10) % 10) + '0');
					_putchar((multiply % 10) + '0');
				}

			}
			_putchar('\n');
		}
	}
}
