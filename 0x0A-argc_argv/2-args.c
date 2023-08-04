#include <stdio.h>
/**
 * main - Prints all arguments it receives
 * @argc: count the number of arguments
 * @argv: prints the string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0 ; a < argc ; a++)
		printf("%s\n", argv[a]);
	return (0);
}
