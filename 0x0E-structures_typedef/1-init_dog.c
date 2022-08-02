#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function to initialize struct dog
 * @d: pointer to struct dog
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 *
 * Return: on success 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
