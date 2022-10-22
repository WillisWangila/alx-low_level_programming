#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n: number of times \ is printed
*/

void print_diagonal(int n)
{
	int spc;
	int lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for ( lines = 0; lines < n; lines++)
		{
			for (spc = 0; spc < lines; spc++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
