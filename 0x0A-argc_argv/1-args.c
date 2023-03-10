#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector, that is, array of arguments
 *
 * Description: A program that prints number of arguments passed to it
 *
 * Return: Always 0 (success)
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
