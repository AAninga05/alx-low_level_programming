#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: bytes to be accepted
 *
 * Return: Pointer to the bytes that matches accept
 * or return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	s++;
	}
	return (0);
}
