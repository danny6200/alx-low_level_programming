/**
 * print_number - prints a sequence of integers passed to it
 * @separator: separates any two given numbers in the sequence
 * @n: number of arguments passed
 *
 * Return: nothing on success
 */
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num, sep = 0;
	va_list ap;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (sep > 0 && separator != NULL)
			printf("%s", separator);
		sep++;
		printf("%d", num);
	}
	printf("\n");
	va_end(ap);
}
