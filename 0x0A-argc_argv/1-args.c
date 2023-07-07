/**
 * main - prints number of argument passed
 * to a program
 * @argc: keeps count of argument
 * @argv: holds array of arguments
 *
 * Return: 0 on success
 */
#include <stdio.h>
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
