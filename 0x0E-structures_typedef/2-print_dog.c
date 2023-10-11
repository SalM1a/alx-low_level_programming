#include <stdio.h>
#include "dog.h"
/**
 * print_dog -  a function that prints a struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
struct dog
{
char *name;
float age;
char *owner;
};
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("Name: (nill)\n");
}
else
{
printf("name: %s\n", d->name);
}
printf("Age: %f\n", d->age);

if (d->owner == NULL)
{
printf("owner: (nill)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
