#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'program that prints the last digit'
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */

int main(void)
{
int n;
int lastdigitn;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastdigitn = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastdigitn);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastdigitn);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n",
n, lastdigitn);
}
return (0);
}