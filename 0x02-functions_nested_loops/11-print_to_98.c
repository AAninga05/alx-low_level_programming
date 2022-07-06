#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Check Holberton
 * @n: An input integer
 * Description: function that prints al natural numbers
 * from n to 98, followed by new line
 * Return nothing.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n <= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
