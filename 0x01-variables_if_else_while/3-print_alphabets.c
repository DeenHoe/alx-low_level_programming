#include <stdio.h>
/**
 * main - main fumction
 *
 * Return: should be 0
 */
int main(void)
{
	char i;
	char e;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (e = 'A'; e <= 'Z'; e++)
		putchar(e);
	putchar('\n');
	return (0);
}
