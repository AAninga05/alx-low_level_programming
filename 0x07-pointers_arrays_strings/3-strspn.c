#include "main.h"
/**
 * _strspn - get length of prefix substring
 * @s: string to be searched
 * @accept: bytes to be accepted
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int i, foundChar;
	
	while (s)
	{
		for (i = 0; accept[i]; i++)
		{
			foundChar = 0;
			if (s == accept)
			{
				res++;
				foundChar = 1;
				break;
			}
		}
	if (!foundChar)
		break;
	s++;
	}
	return (res);
}
