#include "main.h"

/**
 * main - checks for uppercase character
 * @c: Character to check
 * Return: 1 if uppercase character and 0 if otherwise
*/

int _isupper(int c);
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
