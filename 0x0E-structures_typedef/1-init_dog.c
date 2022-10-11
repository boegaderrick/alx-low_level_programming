#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initializes a struct
* @d: pointer to struct
* @name: name of struct member
* @age: age of struct member
* @owner: owner of struct member
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
