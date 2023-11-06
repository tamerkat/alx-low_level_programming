#include "dog.h"

/**
 * init_dog - Entry point
 * @owner: thepointer
 * @name: the name of the
 * @age: the age of the
 * @d: doger
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->owner = owner;
	d->name = name;
	d->age = age;
	}
}
