#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* read_textfile - read and write number text from file
*
* @filename: name of the file
* @letters: number of the elements to be read from the file
*
* Return: the real number of letters in file
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t fp;
ssize_t w;
ssize_t r;


fp = open(filename, O_RDONLY);
if (fp == -1)
	return (0);
buffer = malloc(sizeof(char) * letters);

r = read(fp, buffer, letters);
w = write(STDOUT_FILENO, buffer, r);

free(buffer);
close(fp);

return (w);
}
