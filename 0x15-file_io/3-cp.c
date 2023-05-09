#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* close_file - function that checks if the file is closed
*
* @file: file to be closed.
*/
void close_file(int file)
{
int c;

c = close(file);
if (c == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c);
	exit(100);
}
}
/**
* main - main function
*
* @argc: number of argument placed
* @argv: pointer of the arguments placed
*
* Return: 1 if success
*/
int main(int argc, char *argv[])
{
int rite, red, file_from, file_to;
char *buffer;


buffer = malloc(sizeof(char) * 1024);

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

file_from = open(argv[1], O_RDONLY);
red = read(file_from, buffer, 1024);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 664);

while (red > 0)
{
if (red == -1 || file_from == -1)
{
	dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
	free(buffer);
	exit(98);
}
rite = write(file_to, buffer, red);
if (file_to == -1 || rite == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	free(buffer);
	exit(99);
}
red = read(file_from, buffer, 1024);
file_to = open(argv[2], O_WRONLY | O_APPEND);
}

free(buffer);
close_file(file_from);
close_file(file_to);
return (0);

}
