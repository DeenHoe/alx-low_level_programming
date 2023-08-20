#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: variable of the struct dog to be printed
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("%s\n", d->name);
		
		printf("%f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
