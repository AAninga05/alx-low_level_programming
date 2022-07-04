#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: A program that prints a all possible
 * combination of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;
	int a, b, c, d;

	i = 0;
	while (i < 100)
	{
		a = i / 10;
		b = i % 10;
		for (j = 0; j < 100; j++)
		{
			c = j / 10;
			d = j % 10;
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');
				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	i++;
	}
	putchar(10);
	return (0);
}
