#include "main.h"
/**
 * str_concat - function to concantenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len, k = 0;
	char *s;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	len = i + j;
	s = (char *)malloc(len * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	while (k < len)
	{
		if (k < i)
		s[k] = s1[k];
		if (k >= i)
		{
		s[k] = s2[j];
		j++;
		}
	k++;
	}
	s[k] = '\0';
	return (s);
}
