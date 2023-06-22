#include <stdio.h>

/**
 * main - prints 1 to 100 but replaces multiples of 3 with 'fizz',
 * multiples of 5 with 'buzz' and muliples of both with 'fizzbuzz'
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;
	int sep = 0;

	for (i = 1; i <= 100; i++)
	{
		if (sep > 0)
		{
			putchar(' ');
		}
		sep++;

		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
	}
	printf("\n");
	
	return (0);
}

