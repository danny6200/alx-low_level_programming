/**
  * print_all - prints argument of any datatype in the list "c, i, f, s"
  * @format: array of datatypes of argument passed
  *
  * Return: nothing on success
  */
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>

void print_all(const char * const format, ...)
{
	va_list ap;
	char *s, *p = (char *)format;
	char c;
	int i, sep = 0;
	float f;

	va_start(ap, format);
	while (*p)
	{
		if (sep > 0 && (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's'))
			printf(", ");
		sep++;
		switch (*p)
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
		p++;
	}
	va_end(ap);
	printf("\n");
}
