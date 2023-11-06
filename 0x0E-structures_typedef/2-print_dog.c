#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function
 * struct dog - Entry point
 * @d: pointer
*/

void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %s\n", d->Age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
