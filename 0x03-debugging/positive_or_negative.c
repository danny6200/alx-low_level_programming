#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - checks if a random num is +ve, 0 or -ve & prints out result to screen
 *
 * Return: 0 after a successful execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
