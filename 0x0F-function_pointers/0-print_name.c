/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to a function that uses 'name'
 *
 * Return: nothing
 */
#include "function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
