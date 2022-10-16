#include <stdio.h>

/**
 * main - Prints lowercase alphabet in reverse
 * Return: 0
*/

int main(void)
{
	char rev_alphabet;

	rev_alphabet = 'z';
	while (rev_alphabet >= 'a')
	{
		putchar(rev_alphabet);
		rev_alphabet--;
	}

	putchar('\n');
	return (0);
}
