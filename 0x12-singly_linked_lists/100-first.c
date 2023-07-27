/**
 * print_message - prints a message to stdout before the main function is run
 *
 * Return: nothing
 */
#include <stdio.h>
#include <stdlib.h>

void __attribute__((constructor))print_message()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
