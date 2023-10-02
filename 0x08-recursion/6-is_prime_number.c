#include "main.h"
/**
 * is_prime_number - calculates if number is prime number recursively
 * @n: number to evaluate
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
int i;
if (i == 2)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
return (is_prime_number(n, i - 1));
}
