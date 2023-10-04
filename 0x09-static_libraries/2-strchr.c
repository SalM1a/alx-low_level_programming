#include "main.h"
/**
* _strchr - locates a character in a string
* @s: pointer to the character
* @c: character to be located
* Return: A pointer to the located character in the string, or NULL
*/
char *_strchr(char *s, char c)
{
int i = 0;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
