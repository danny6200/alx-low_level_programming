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
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int count = 0;
	int i = 0;
	int numCoins = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	cents = atoi(argv[1]);
	
	for (i = 0; i < numCoins; i++)
	{
		count += cents / coins[i];
		cents = cents % coins[i];
	}

	printf("%d\n", count);

	return (0);
}
