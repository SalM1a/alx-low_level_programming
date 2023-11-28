#include "main.h"
#include "main.h"
/**
 * _strlen -  a function that return the length of string
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
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t size;
size_t len;
if (filename == NULL)
return (-1);
if (text_content == NULL)

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
exit (1);
if (text_content != NULL)
{
len = _strlen(text_content);
size = write(fd, text_content, len);
if (size == -1)
{
exit(1);
}
}
close(fd);
return (1);
}
