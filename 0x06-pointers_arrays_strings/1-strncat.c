#include "main.h"
/**
 * _strncat - program that concantenates two strings
 * @dest: string destination
 * @src: string source
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, counter;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	counter = 0;
	while (counter < n && src[counter] != '\0')
	{
		dest[i + counter] = src[counter];
		counter++;
	}
	dest[i + counter] = '\0';
	return (dest);
}
