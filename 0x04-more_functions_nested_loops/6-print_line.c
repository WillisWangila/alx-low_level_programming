#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: number of times to  print _ character
*/

void print_line(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
