#include <stdio.h>
/**
 * main - count the number of argument passed into it
 * @argc: counting argument
 * @argv: string parameter
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
