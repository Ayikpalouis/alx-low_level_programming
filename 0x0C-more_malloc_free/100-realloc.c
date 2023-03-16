#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previously allocated memory
 * @old_size: byte size of allocated space for ptr
 * @new_size: byte size of new memory block
 *
 * Return: NULL if new_size is 0 and ptr is not NULL, or pointer to new
 * memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}
