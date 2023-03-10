#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector, that is, array of arguments
 *
 * Description - A program thst adds positive numbers.
 *
 * Return: 0 is successful, 1 if error
 */

int main(int argc, char *argv[])
{
	int i = 1, num, sum = 0;
	char *ptr;

	if (argc > 1)
	{
		while (i < argc)
		{
			num = strtol(argv[i], &ptr, 10);
			if (*ptr)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += num;

			i++;
		}
	}

	printf("%d\n", sum);

	return (0);
}
