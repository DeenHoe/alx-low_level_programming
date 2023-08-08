#include "main.h"
/**
 * str_concat - Concatenate two strings
 * @s1: string 1
 * @s2: string to be appended
 * Return: a pointer to the newly alocated memory containing the concat str
 */

char *str_concat(char *s1, char *s2)
{
	char *sex;
	int a;
	int b = 0;
	int c = 0;

	if (s1 == NULL)
                s1 = "";
	if (s2 == NULL)
                s2 = "";
	for (a = 0 ; s1[a] != '\0' ; a++)
		c++;
	for (a =0 ; s2[a] != '\0' ; a++)
		b++;
	sex = malloc(sizeof(char) * (b + c) + 1);

	if (sex == NULL)
		return (NULL);
	for (a = 0 ; s1[a] != '\0' ; a++)
		sex[a] = s1[a];
	for (a = 0 ; s2[a] != '\0' ; a++)
		sex[c + a] = s2[a];
	return (sex);
}
