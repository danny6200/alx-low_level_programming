/**
 * factorial - prints the product of a number from one to that
 * number using recursion
 * @n: number whose factorial is needed
 *
 * Return: factorial of the number passed
 */
#include "main.h"
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
