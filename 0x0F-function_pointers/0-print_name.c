#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer to a character
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
