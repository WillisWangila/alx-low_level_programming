#include "main.h"

/**
 * print_numbers - function prints 0-9 followed by a new line
 * Return: digits
*/

void print_numbers(void)
{
	char i;

	while (i < '10')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
