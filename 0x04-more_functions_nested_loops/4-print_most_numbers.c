#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9
 * except 2 and 4 followed by a new line
 * Return: digits
*/

void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if (i != '2' || i != '4')
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
