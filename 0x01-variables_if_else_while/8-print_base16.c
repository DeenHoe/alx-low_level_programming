#include <stdio.h>
/**
 * main - the main function
 *
 * Return: should be 0
 */
int main(void)
{
	int d;
	char k;

	for (d = 0 ; d < 10 ; d++)
		putchar(d + '0');
	for (k = 'a' ; k < 'g' ; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
