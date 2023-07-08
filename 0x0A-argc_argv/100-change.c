/**
 * calculateMinCoins - calculates minimum
 * coins
 * @cents: to be changed to coins
 *
 * Return: no of coins
 */
#include <stdio.h>
#include <stdlib.h>

int calculateMinCoins(int cents)
{
	if (cents <= 0)
	{
		return (0);
	}
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);
	int count = 0;

	for (int i = 0; i < numCoins; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];
	}
	return (count);
}

/**
 * main - changes cents to coins
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
	}
	return (1);

	int cents = atoi(argv[1]);

	if (cents < 0)
		printf("0\n");
	else
		int minCoins = calculateMinCoins(cents);
	printf("%d\n", minCoins);

	return (0);
}

