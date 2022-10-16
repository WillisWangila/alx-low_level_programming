#include <stdio.h>

/**
 * main - Print alphabet in lowercase then uppercase
 * Return: 0
*/

int main(void)
{
	char lower_alphabet;
	char upper_alphabet;

	lower_alphabet = 'a';
	upper_alphabet = 'A';

	while (lower_alphabet <= 'z')
	{
		putchar(lower_alphabet);
		lower_alphabet++;
	}

	while (upper_alphabet <= 'Z')
	{
		putchar(upper_alphabet);
		upper_alphabet++;
	}

	putchar('\n');
	return (0);
}
