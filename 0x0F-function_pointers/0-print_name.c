#include "function_pointers.h"

/**
 * print_name - prints a name using function pointer
 * @name: character pointer to string, i.e. name to be printed
 * @f: fucntion pointer with character pointer argument
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
