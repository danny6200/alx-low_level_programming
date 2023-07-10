/**
 * main - changes cents to coins
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins += cents / 25;

	cents = cents % 25;

	coins += cents / 10;

	cents = cents % 10;

	coins += cents / 5;

	cents = cents % 5;

	coins += cents / 2;

	cents = cents % 2;

	coins += cents / 1;

	printf("%d\n", coins);

	return (0);
}

