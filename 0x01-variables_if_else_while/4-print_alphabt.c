#include <stdio.h>

/**
 * main - Print all lowercase characters except 'q' and 'e'
 * Return: 0
*/

int main(void)
{
	char lc_alphabet;

	lc_alphabet = 'a';
	while (lc_alphabet <= 'z')
	{
		if ((lc_alphabet != 'q') && (lc_alphabet != 'e'))
		{
			putchar(lc_alphabet);
		}
		lc_alphabet++;
	}

	putchar('\n');
	return (0);

}
