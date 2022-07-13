#include "main.h"
/**
 * _strlen - Program that counts length of string
 * @s: string value
 *
 * Return: Always 0;
 */
int _strlen(char *s)
{
	int str_count = 0;

	while (s[str_count] != '\0')
	{
		str_count++;
	}
	return (str_count);
}
