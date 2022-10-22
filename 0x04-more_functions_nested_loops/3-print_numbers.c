#include "main.h"

/**
 * print_numbers - function prints 0-9 followed by a new line
 * Return: digits
*/

void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
