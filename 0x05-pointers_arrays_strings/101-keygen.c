#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int rand_num, ctr, total;
	time_t t;

	srand(time(&t));

	for (ctr = 0, total = 2772; total > 122; ctr++)
	{
		rand_num = (rand() % 125) + 1;
		printf("%c", rand_num);
		total -= rand_num;
	}

	printf("%c", total);

	return (0);
}
