#include "main.h"

/**
 * times_table - prints the 9 times table
*/

void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			int m = a * b;


			if (b == 0)
			{
				_putchar('0' + m);
			}
			else if (m <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + m);
			}
			else if  (m > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (m / 10));
				_putchar('0' + (m % 10));
			}
		}
		_putchar('\n');
	}
}
