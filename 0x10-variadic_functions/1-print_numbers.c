#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: The string to be printed between the numbers.
 * @n: The number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int res;

va_start(args, n);
for (i = 0; i < n; i++)
{
res = va_arg(args, int);
printf("%d", res);

if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
