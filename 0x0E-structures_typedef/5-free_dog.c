#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees dog
 * @d: pointer to struct dog_t
 * Return: 0 on success
 */
void free_dog(dog_t *d)
{

	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
