#include "main.h"
/**
 * string_nconcat - function that concancates two string
 * @s1: first string
 * @s2: second string
 * @n: integer
 *
 * Return: number of concantenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, size;
	char *s;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n > len2)
		n = len2;
	size = len1 + n;
	s = malloc(sizeof(*s) * size + 1);
	if (!s)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
	}
	s[i] = '\0';
	return (s);
}
/**
 * _strlen - function to print length of string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
	{
		s++;
	}
	return (s - p);
}
