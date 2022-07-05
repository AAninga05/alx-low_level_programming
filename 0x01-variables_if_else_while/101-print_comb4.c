#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: A program that prints all combination of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, hundreds, tens, units;

	i = 0;

	while (i < 1000)
	{
		hundreds = i / 100;
		tens = (i / 10) % 10;
		units = i % 10;
		if (hundreds < tens && tens < units)
		{
			putchar(hundreds + 48);
			putchar(tens + 48);
			putchar(units + 48);
			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar(10);
	return (0);
}
