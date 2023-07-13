#include <stdio.h>

/**
 * main - this is the first function
 *
 * Return: must be 0 on success
 */

int main(void)
{
	long long int l;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(l));
	printf("Size of a float: %lu byte(s)", (unsigned long) sizeof(float));
	return (0);
}
