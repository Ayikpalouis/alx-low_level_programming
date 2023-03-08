#include "main.h"

/**
 * _strlen_recursion - determines the length of string
 * @s: character pointer to string
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int ctr;

	if (*s == '\0')
		return (0);
	ctr = 1 + _strlen_recursion(s + 1);

	return (ctr);
}
