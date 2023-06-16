#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - checks if last digit of a num > 5, 0 < n <6 or 0
 *
 * Return: 0 after a successful execution
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	else if (l < 6 && l != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	else
		printf("Last digit of %d is %d and is 0\n", n, l);
	return (0);
}
