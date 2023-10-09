#include <stdlib.h>
#include "main.h"
/**
 * create_array - a function that creates an array of chars, and initializes it
 * @size: unsigned integer
 * @c: array of characters
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
size_t i;
char *ptr;
if (size == 0)
return (NULL);
ptr = (char *)malloc(size * sizeof(char));
if (ptr == NULL)
return (NULL);
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
