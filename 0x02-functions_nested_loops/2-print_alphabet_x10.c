#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet in lowercase followed by newline 10x
 * Return:0
*/

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}

}
