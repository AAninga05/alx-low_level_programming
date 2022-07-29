#include "main.h"
/**
 * malloc_checked - function that allocate memory using malloc
 * @b: integer
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}
