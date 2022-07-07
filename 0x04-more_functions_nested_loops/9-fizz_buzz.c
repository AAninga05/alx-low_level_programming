#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Print Fizz on multiple of 3, Buzz on multiple of 5
 * and FizzBuzz on multiples of 15
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf("%d ", i);
		}
	i++;
	}
	printf("\n");
	return (0);
}


