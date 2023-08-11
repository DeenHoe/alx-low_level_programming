#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - Concatenate two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes to be concatenated
 *Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *ret = 0;
	unsigned int a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0 ; s1[a] != '\0' ; a++)
		s1len++;
	for (a = 0 ; s2[a] != '\0' ; a++)
		s2len++;
	ret = malloc(sizeof(char) * (s1len + n) + 1);
	if (ret == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (a = 0 ; s1[a] != '\0' ; a++)
			ret[a] = s1[a];
		for (a = 0 ; s2[a] != '\0' ; a++)
			ret[s1len + a] = s2[a];
		ret[s1len + a] = '\0';
	}
	else
	{
		for (a = 0 ; s1[a] != '\0' ; a++)
			ret[a] = s1[a];
		for (a = 0 ; a < n ; a++)
			ret[s1len + a] = s2[a];
		ret[s1len + n] = '\0';
	}
	return (ret);
}
