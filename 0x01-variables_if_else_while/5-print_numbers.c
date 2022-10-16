#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting from 0
 * Return: 0
*/

int main(void)
{
	int num;

	num = 0;
	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);

}
