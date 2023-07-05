/**
 * _pow_recursion - returns the value got after multiplying x, y times
 * @x: base number to be multiplied y times
 * @y: exponent - determines the number of times the base should be
 * multiplied ny itself
 *
 * Return: value of x ^ y
 */
#include "main.h"
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
