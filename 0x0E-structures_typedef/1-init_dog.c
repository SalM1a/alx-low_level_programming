#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Description: Structure representing a dog with its name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
