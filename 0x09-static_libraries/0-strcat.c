#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: destination string
* @src: source string
*
* Return: pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
i++;
}
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
