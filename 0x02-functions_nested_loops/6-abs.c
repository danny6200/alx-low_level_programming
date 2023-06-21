#include "main.h"
/**
 * _abs - prints the absolute value of a number to the screen
 * @num: number to find its absolute value
 *
 * Return: 0 on success
 */
int _abs(int num)
{

	if (num > 0)

		return (num);

	else if (num < 0)

		return (-num);
	else
		return (0);
}
