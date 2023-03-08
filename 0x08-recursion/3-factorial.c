#include "main.h"

/**
 * factorial - calculates factorial of givrn number
 * @n: given number
 *
 * Return: -1 if number is less than 0, otherwise the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
