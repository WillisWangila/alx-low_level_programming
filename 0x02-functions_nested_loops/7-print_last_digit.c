#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @x: number to be examined
 * Return: value of the last digit
*/

int print_last_digit(int x)
{
	int n = x % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + n);
	return (n);

}
