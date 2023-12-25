#include "main.h"
/**
 * swap_int - unction that swaps the values of two integers
 * @a: pointer to swap
 * @b: pointer to swap
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
