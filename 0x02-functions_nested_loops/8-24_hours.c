#include "main.h"
/**
 * jack_bauer - Program that counts down 24 hours like
 * in the movies
 *
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; j < 24; j++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(58);
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
		}
	}
}
