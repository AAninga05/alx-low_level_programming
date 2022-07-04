#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: A program that prints all possible combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, single_digit, double_digits;

	for (i = 0; i < 100; i++)
	{
		single_digit = i % 10;
		double_digits = i / 10;
		if (double_digits < single_digit)
		{
			putchar(double_digits + 48);
			putchar(single_digit + 48);
			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
