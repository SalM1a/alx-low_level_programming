#include "main.h"
/**
 * _strlen - a function that return the length of string
 * @str: string whose length to be printed
 * Return: length of string
 */
int _strlen(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}
/**
 * create_file -  a function that creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t w;
ssize_t sz = 0;

if (filename == NULL)
return (-1);

if (text_content == NULL)
text_content = " ";
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
sz = _strlen(text_content);
w = write(fd, text_content, sz);
if (w != sz)
{
return (-1);
}
}
close(fd);
return (1);
}
