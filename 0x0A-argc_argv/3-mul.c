#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: number of arguments passed
 * @argv: holds pointers to the addresses of the strings passed as arguments
 * Return: 0 when successful and 1 if the program doesn't receive 2 arguments
*/

int main(int argc, char *argv[])
{
	int product, a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = (a * b);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
