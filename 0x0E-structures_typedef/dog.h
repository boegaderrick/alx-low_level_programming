#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - stores details about dog
* @name: stores dog's name
* @age: stores dog's age
* @owner: stores owner's name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

#endif
