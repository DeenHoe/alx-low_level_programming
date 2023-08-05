#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: names of the arguments
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int a;
	int mul = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (a = 1 ; a < argc ; a++)
			mul *= atoi(argv[a]);
	}
	printf("%i\n", mul);
	return (0);
}
