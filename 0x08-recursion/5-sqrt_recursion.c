/**
 * square_root_recursion - finds the integral part of
 * the square root of a number
 * @n: number whose square root is to be computed
 * @start: determines the beginning of the search
 * @end: determines the end of the search
 *
 * Return: square root of integer n
 */

#include "main.h"
int square_root_recursive(int n, int start, int end)
{
	int mid = (start + end) / 2;
	int square = mid * mid;

	if (start > end)
		return (-1);  /*Number does not have a natural square root*/

	if (square == n)
		return (mid);  /*Base case: found the square root*/
	else if (square < n)
		/*Recurse in the upper half*/
		return (square_root_recursive(n, mid + 1, end));
	/*Recurse in the lower half*/
	return (square_root_recursive(n, start, mid - 1));
}

/**
 * _sqrt_recursion - returns the square root of a given integer
 * @n: integer whose square root is to be found
 *
 * Return: square of integer n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);  /*Negative numbers do not have a natural square root*/
	return (square_root_recursive(n, 0, n));
}
