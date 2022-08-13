#include "main.h"
/**
 * puts_half - Program that prints half length of string
 * @str: String character
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int index;
	int half;

	for (index = 0; str[index] != '\0'; index++)
	if (index % 2 == 0)
	{
		half = index / 2;
	}
	else
	{
		half = index - (index - 1) / 2;
	}
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
