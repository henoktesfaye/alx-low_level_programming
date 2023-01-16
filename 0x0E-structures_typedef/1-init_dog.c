#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initi a variabale
 * @d: poointer to sruct
 * @name: name to inti
 * @age: age to init
 * @owner: owner to int
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
