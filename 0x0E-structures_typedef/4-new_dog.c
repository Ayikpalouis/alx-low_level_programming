#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: character pointer to dog name
 * @age: variable to hold age of dog
 * @owner: character pointer to owner of dog
 *
 * Return: NULL if function fails, else new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	char *n_cpy, *o_cpy;
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	while (name[i] != '\0')
		i++;

	while (owner[j] != '\0')
		j++;

	n_cpy = malloc(sizeof(char) * i + 1);
	if (n_cpy == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	o_cpy = malloc(sizeof(char) * j + 1);
	if (o_cpy == NULL)
	{
		free(n_cpy);
		free(n_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n_cpy[k] = name[k];
	for (k = 0; k <= j; k++)
		o_cpy[k] = owner[k];

	n_dog->name = n_cpy;
	n_dog->age = age;
	n_dog->owner = o_cpy;

	return (n_dog);
}
