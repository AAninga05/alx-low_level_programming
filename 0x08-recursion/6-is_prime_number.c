#include "main.h"
/**
 * isPrime - function that checks for prime number
 * @n: integer number
 * @i: iterator number
 * Return: 1 if true or 0 if false
 */
int isPrime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (isPrime(n, i - 1));
}
/**
 * is_prime_number - function that prints if an
 * integer is a prime number
 * @n: integer
 * Return: 0 if successful
 */
int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (isPrime(n, n - 1));
}

