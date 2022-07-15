#include "main.h"
/**
 * string_toupper - program that converts string to uppercase
 * @s: string
 * Return: uppercase letters
 */
char *string_toupper(char *s)
{
	char i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
