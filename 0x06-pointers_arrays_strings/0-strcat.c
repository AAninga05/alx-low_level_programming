#include "main.h"
/**
 * _strcat - program that concantenates two strings
 * @dest: string destination
 * @src: string source
 *
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int len_dest, counter;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}
	for (counter = 0; src[counter] != '\0'; counter++)
	{
		dest[len_dest + counter] = src[counter];
	}
	return (dest);
}
