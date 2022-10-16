#include <stdio.h>

/**
 * main - Entry point; print lowercase alphabet a - z
 * Return: 0
*/

int main(void)
{
	char lc_alphabet;

	lc_alphabet = 'a';
	while (lc_alphabet <= 'z')
	{
		putchar(lc_alphabet);
		lc_alphabet++;
	}
	putchar('\n');
	return (0);
}
