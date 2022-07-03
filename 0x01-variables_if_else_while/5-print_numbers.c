#include <stdio.h>
/**
 * main - Entry Point.
 *
 * Description: Program that prints all single digits of base 10 and return 0
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
