#include <stdio.h>
/**
 * main - print number of arguments passed to the program
 * @argc: holds number of arguments passed
 * @argv: holds pointers to the addresses of the strings passed as arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", --argc);
	}
	return (0);
}
