#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination memory
 * @src: pointer to the source memory
 * @n: number of bytes to be copied
 * Return: pointer to the destination memory
 */
char *_strncat(char *dest, char *src, int n)
{
size_t i = 0, j = 0;
while (dest[i])
{
i++;
}
while (src[j] && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
