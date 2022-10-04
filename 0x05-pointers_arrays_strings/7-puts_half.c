#include "main.h"
/**
 * puts_half - Program that prints half length of string
 * @str: String character
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int i, half, length;
	
	length = 0;
	if (str[length] != '\0')
	{	
		for (length = 0; str[length] != '\0'; length++)
			if (length % 2 == 0)
				half = length / 2;
			else
				half = length - (length - 1) / 2;
		i = half;
		if (length == 1)
			_putchar(str[length]);
		else
		{
			while (str[i] != '\0')
			{
				_putchar(str[i]);
				i++;
			}
		}
	}
	_putchar('\n');
}
