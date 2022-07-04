#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: A program that prints all possible combination
 * of single numbers followed by a ',' and ' '.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n < 57)
		{
		putchar(44);
		putchar(32);
		}
		n++;
	}
	putchar(10);
	return (0);
}
