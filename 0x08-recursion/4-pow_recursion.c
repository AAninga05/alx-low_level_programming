#include "main.h"
/**
 * _pow_recursion - function that returns the value of x ^ y
 * @x: base number
 * @y: exponential number
 * Return: Success 1 or Error -1
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
