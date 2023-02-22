#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fib_1 = 0;
	int fib_2 = 1;
	int fib_n = fib_1 + fib_2;
	int sum = 0;

	while (sum < 4000000)
	{
		if (fib_n % 2 == 0)
		{
			sum += fib_n;
		}
		fib_1 = fib_2;
		fib_2 = fib_n;
		fib_n = fib_1 + fib_2;
	}

	printf("%d\n", sum);

	return (0);
}
