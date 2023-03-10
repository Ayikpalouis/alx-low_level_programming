#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector, which is an array of all arguments passed to the
 * program
 *
 * Description: A program that prints its name.
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[argc - 1]);
	else
		printf("Program not expecting additional arguments.\n");

	return (0);
}
