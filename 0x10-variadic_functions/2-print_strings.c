/**
 * print_strings - prints a list of strings
 * @separator: separates any two strings
 * @n: number of arguments to be passed
 *
 * Return: nothing on success
 */
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int sep = 0;
	char *string;
	va_list ap;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		if (sep > 0 && separator != NULL)
			printf("%s", separator);
		sep++;
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
	}
	printf("\n");
	va_end(ap);
}
