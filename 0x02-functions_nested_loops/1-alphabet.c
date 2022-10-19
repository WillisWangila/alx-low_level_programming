#include "main.h"

/**
 * Description - Prints alphabet in lowercase followed by newline
 * Return:0
*/

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
