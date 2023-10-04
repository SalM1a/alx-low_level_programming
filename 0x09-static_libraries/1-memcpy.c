#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory
 * @src: pointer to the source memory
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
if (dest == NULL)
return (NULL);
char *c = (char *) dest;
char *e = (char *) src;
for (int i = 0; i < n; i++)
c[i] =  e[i];
return (dest);
}
