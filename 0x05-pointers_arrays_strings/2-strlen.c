#include "main.h"

/**
 * _strlen - finds length of string
 * @s: string to be evaluated
 * Return: count
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s++)
	{
		count++;
	}
	return (count);
}
