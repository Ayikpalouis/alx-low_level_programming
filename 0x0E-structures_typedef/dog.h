#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct type for dog
 * @name: character pointer to a string
 * @age: variable to hold age of dog
 * @owner: character pointer to string
 *
 * Description: a structure definition that defines a dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog, dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
