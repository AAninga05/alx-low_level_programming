#include "main.h"
/**
 * create_array - create an array of char and initialize it
 * @size: array size
 * @c: charater to be initialized with
 * Return: string pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
