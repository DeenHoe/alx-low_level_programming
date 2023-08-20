#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct
 * @d: name of the struct variable
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	
	d->name = name;
	d->age = age;
	d->owner = owner;

}
