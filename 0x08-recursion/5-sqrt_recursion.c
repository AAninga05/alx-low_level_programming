#include "main.h"
/**
 * isSqrt - funtion to print number sqrt
 * @n: square number
 * @b: square root
 * Return: for error -1
 */
int isSqrt(int n, int b)
{
	if (b * b > n)
		return (-1);
	if (b * b == n)
		return (b);
	return (isSqrt(n, b + 1));
}
/**
 * _sqrt_recursion - function that return natural
 * square root of number
 * @n: square root
 * Return: for error -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (isSqrt(n, 1));
}
