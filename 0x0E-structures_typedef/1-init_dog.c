#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialiizes a variable
 * @d: variable type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
;
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
