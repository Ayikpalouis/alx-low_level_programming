#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Outpu sum of multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1;
	int sum = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
		a++;
	}
	printf("%d\n", sum);

	return (0);
}
