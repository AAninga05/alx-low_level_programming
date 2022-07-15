#include "main.h"
/**
 * _strncpy - program that copies strings
 * @dest: string destination
 * @src: string source
 * @n: integer
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
