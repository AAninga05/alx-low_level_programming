#include "main.h"
/**
 * swap_int - Program that swaps integers
 * @a: Integer a
 * @b: Integer b
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
