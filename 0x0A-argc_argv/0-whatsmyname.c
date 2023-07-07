/**
 * main - This function prints the first
 * string in argv
 * @argc: keeps count of the argument passed
 * to the program at the command line
 * @argv: holds an array of all arguments
 * or strings passed to main
 *
 * Return: 0 on success
 */
#include <stdio.h>
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
