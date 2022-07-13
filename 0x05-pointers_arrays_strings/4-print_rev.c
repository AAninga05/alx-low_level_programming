#include "main.h"
/**
 * print_rev - Program that print string in reverse
 * @s: string character
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (n = i - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
