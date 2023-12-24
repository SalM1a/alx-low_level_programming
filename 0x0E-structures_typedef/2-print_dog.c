#include <stdio.h>
#include "dog.h"
/**
 * print_dog -  a function that prints a struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
if (d != NULL)
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
printf("Name: %s\n,  Age: %f\n, Owner: %s\n", d->name, d->age, d->owner);
}
