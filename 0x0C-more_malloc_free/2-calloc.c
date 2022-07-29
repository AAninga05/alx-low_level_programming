#include "main.h"
/**
 * _calloc - function that allocate memory for an array
 * @nmemb: integer
 * @size: size of datatype
 * Return: memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * sizeof(size));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
