/**
 * main - adds numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *numstr = argv[i];
		int j;

		for (j = 0; numstr[j] != '\0'; j++)
		{
			if (!isdigit(numstr[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
