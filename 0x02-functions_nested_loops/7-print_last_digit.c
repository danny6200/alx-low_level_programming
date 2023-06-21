#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: number whose last digit is to be printed
 *
 * Return 0 on success
 */
int print_last_digit(int num)
{
	int l = num % 10;

	_putchar (l + '0');

	return (0);
}
