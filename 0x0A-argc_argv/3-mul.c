/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: result of multiplication on succe
 * s but 1 on failure
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		mul *= atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
}
