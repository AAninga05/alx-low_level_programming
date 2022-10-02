#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int i, fib1, fib2, sum, tSum;

	fib1 = 1;
	fib2 = 2;
	sum = 0;
	tSum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((fib2 % 2 == 0) && (fib2 <= 4000000))
		{
			tSum = tSum + fib2;
		}
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%lu\n", tSum);
	return (0);
}
