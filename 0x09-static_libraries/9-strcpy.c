#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: pointer to the destination memory
 * @src: pointer to the source memory
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
