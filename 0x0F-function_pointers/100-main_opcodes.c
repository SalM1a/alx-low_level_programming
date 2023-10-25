#include <stdlib.h>
#include <stdio.h>
/**
* main - prints its own opcodes
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int bit, i;
char *arr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bit = atoi(argv[1]);
if (bit < 0)
{
printf("Error\n");
exit(2);
}
arr = (char *)main;
for (i = 0; i < bit; i++);
{
if (i == bit - 1)
{
printf("%02hhx\n", arr[i]);
}
printf("%02hhx ", arr[i]);
}
return (0);
}
