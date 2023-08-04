#include "main.h"
#include <string.h>
/**
 *_strncat - function to concatenate n amount of strings
 *@dest: destination string
 *@src: source string
 *@n: number of strings
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = strlen(dest);
	int o;

	for (o = 0 ; o < n && *src != '\0' ; o++)
	{
		dest[destlen + o] = *src;
		src++;
	}
	dest[destlen + o] = '\0';
	return (dest);
}
