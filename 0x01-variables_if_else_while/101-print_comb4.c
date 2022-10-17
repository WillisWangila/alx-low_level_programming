#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0
*/

int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
		for (b = a; b <= '9'; b++)
			for (c = b; c <= '9'; c++)
				if (a != b && b != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7' || b != '8' || c != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
	putchar('\n');
	return (0);

}
