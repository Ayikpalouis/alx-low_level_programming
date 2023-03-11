#include "main.h"

/**
 * *_memset - fill memory with constant byte.
 * @s: character pointer of memory location
 * @b: value to be copied to memory block
 * @n: number of bytes in memory block to be set
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
