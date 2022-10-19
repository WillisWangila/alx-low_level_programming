#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c: the character being checked
 * Return: 1 for lowercase 0 for uppercase
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}