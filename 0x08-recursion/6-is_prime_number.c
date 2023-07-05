/**
 * is_prime_recursive - checks if number is prime or not
 * @n: number to be determined if it is prime
 * @divisor: divides number to check if number is a multiple of divisor
 *
 * Return: 1 or 0 depending on the argument
 */
#include "main.h"
int is_prime_recursive(int n, int divisor)
{
	if (n < 2)
	{
		return (0);  /*Numbers less than 2 are not prime*/
	}
	if (divisor == 1)
	{
		return (1);  /*Base case: reached 1 as a divisor, number is prime*/
	}
	if (n % divisor == 0)
	{
		return (0);  /* Divisible by divisor, not prime*/
	}
	/*Recursively check with the next divisor*/
	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - returns 1 if number is prime but 0 if it is not
 * @n: number to be determined if it is prime
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int divisor = n - 1;

	return (is_prime_recursive(n, divisor));
}
