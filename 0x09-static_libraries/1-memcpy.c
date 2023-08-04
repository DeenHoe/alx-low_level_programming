#include "main.h"
/**
 * _memcpy - function to copy n bytes from a memory to another
 * @dest: area to be copied into
 * @src: area to be copied
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
		dest[a] = src[a];
	return (dest);
}
