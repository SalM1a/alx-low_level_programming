#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the filename to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buff;
size_t read_bytes;
size_t write_bytes;

if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buff =malloc(sizeof(char) * letters);
read_bytes = read(fd, buff, letters);
write_bytes = write(STDOUT_FILENO, buff, read_bytes);
if (read_bytes != write_bytes)
return (0);
free(buff);
close(fd);
return (read_bytes);
}

