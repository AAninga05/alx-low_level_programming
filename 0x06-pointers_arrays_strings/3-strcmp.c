#include "main.h"
/**
 * _strcmp - function that compares two string
 * @s1: a string pointer
 * @s2: a string pointer to compare
 *
 * Return: string compared
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
