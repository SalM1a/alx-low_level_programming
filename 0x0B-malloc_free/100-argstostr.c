#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int i, x, y = 0, l = 0;
char *st;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (x = 0; av[i][x]; x++)
l++;
}
l += ac;
st = malloc(sizeof(char) * l + 1);
if (st == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (x = 0; av[i][x]; x++)
{
st[y] = av[i][x];
y++;
}
if (st[y] == '\0')
{
st[y++] = '\n';
}
}
return (st);
}
