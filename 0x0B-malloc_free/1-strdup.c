#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer
 * @str: pointer to a string
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
char *s1 = (char *)malloc(strlen(str) + 1);

if (s1 == NULL)
return (NULL);
strcpy(s1, str);
return (s1);
}
