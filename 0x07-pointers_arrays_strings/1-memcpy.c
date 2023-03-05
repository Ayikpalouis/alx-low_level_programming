#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: character pointer to destination array
 * @src: character pointer to source of data
 * @n: number of bytes to be copied
 *
 * Return: character pointer to destination array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
