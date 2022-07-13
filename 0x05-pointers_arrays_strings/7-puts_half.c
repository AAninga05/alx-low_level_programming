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

	for (index = 0; str[index] != 0; index++)
	half = (index + 1) / 2;
	while (str[half])
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
