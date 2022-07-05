#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: A program that reverses letter's
 * of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int rev_alpha = 122;

	while (rev_alpha >= 97)
	{
		putchar(rev_alpha);
		rev_alpha--;
	}
	putchar('\n');
	return (0);
}
