#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be printed in reverse
 * Return: Nothing
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	while (index)
	{
		_putchar(s[--index]);
	}
	_putchar('\n');
}
