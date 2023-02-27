#include "main.h"

/**
 * swap_int - swap the values of two variables
 * @a: first value
 * @b: second value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
