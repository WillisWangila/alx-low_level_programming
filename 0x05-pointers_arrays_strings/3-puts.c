#include "main.h"

/**
 * _puts - prints string followed by newline
 * @str: string to be printed
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
