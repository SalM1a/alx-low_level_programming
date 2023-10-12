#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list y;
unsigned int i;
char *str;

va_start(y, n);
for (i = 0; i < n; i++)
{
str = va_arg(y, char*);
if (separator != NULL && i > 0)
{
printf(" %s", separator);
}
if (str == NULL)
{
printf("(nill)");
}
else
{
printf("%s", str);
}
va_end(y);
}
printf("\n");
}