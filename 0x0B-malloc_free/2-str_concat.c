#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
size_t len1, len2, i;
if (s1 == NULL || s2 == NULL)
return (NULL);

len1 = strlen(s1);
len2 = strlen(s2);

ptr = (char *)malloc(len1 + len2 + 1);
if (ptr == NULL)
return (NULL);

for (i = 0; i <= len2; i++)
{
ptr[len1 + i] = s2[i];
strcpy(ptr, s1);
strcat(ptr, s2);
}
return (ptr);
}
