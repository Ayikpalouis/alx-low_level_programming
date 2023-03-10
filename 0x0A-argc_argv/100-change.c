#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector, that is, array of arguments
 *
 * Description: A program that prints the minimum number of coins to make
 * make change for an amount of money.
 *
 * Return: 0 if successful,, 1 if error.
 */

int main(int argc, char *argv[])
{
	int money;
	int coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	while (money > 0)
	{
		if (money >= 25)
			money -= 25;
		else if (money >= 10)
			money -= 10;
		else if (money >= 5)
			money -= 5;
		else if (money >= 2)
			money -= 2;
		else if (money >= 1)
			money -= 1;
		coins += 1;
	}

	printf("%d\n", coins);

	return (0);
}
