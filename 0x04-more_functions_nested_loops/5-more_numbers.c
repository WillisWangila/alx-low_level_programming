#include "main.h"

/**
 * more_numbers - prints 0 - 14 followed by new line 10 times
*/

void more_numbers(void)
{
	char i;
	int row = 0;

	while (row < 10)
	{

		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar('0' + (i / 10));
			}
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
		row++;
	}
}
