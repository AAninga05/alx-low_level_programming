#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Program that prints lowercase alphabets and
 * then lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower, upper;

	lower = 'a';
	upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
