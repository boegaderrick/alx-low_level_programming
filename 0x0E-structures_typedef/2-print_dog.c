#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints all the members of a struct and their values
* @d: pointer to subject struct
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
