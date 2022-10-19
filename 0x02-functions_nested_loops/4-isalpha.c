#include "main.h"

/**
 * _isalpha - checks for a lowercase character
 * @c: the character being checked
 * Return: 1 alphabet character, 0 for non alphabet character
*/

int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
