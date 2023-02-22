#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int f1 = 0, b1 = 1, f2 = 0, b2 = 2;
	unsigned long int h1, h2, h3;
	int i;

	printf("%lu, %lu, ", b1, b2);
	for (i = 2; i < 98; i++)
	{
		if (b1 + b2 > LARGEST || f2 > 0 || f1 > 0)
		{
			h1 = (b1 + b2) / LARGEST;
			h2 = (b1 + b2) % LARGEST;
			h3 = f1 + f2 + h1;
			f1 = f2;
			f2 = h3;
			b1 = b2;
			b2 = h2;
			printf("%lu%010lu", f2, b2);
		}
		else
		{
			h2 = b1 + b2;
			b1 = b2;
			b2 = h2;
			printf("%lu", b2);
		}
		if (i != 97)
			printf(", ");
	}
	printf("\n");

	return (0);
}
