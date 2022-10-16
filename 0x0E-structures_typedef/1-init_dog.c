#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function name
 * @d: typedef name
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
