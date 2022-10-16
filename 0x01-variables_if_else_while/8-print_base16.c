#include <stdio.h>

/**
 * main - Print all numbers of base 16 in lowercase use onlu putchar
 * Return: 0
*/

int main(void)
{
	char alpha_b16;
	char num_b16;

	alpha_b16 = 'a';
	num_b16 = '0';

	while (num_b16 <= '9')
	{
		putchar(num_b16);
		num_b16++;
	}
	while (alpha_b16 <= 'f')
	{
		putchar(alpha_b16);
		alpha_b16++;
	}
	putchar('\n');
	return (0);

}
