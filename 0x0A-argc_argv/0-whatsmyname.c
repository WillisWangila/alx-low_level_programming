#include <stdio.h>
/**
 * main - prints program name followed by new line
 * @argc: holds number of arguments passed to the command line
 * @argv: holds pointers to addresses of strings passed as arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
