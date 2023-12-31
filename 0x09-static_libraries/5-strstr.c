#include "main.h"
/**
* _strstr -  locates a substring
* @haystack: a pointer to the memory
* @needle: a pointer to the  memory
* Return: a pointer to the beginning of the located substring, or NULL
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;
while (*l == *p && *p != '\0')
{
l++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}
