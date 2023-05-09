#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*
*
*
*
*/
int main (int argc, char *argv[])
{
int rite, red, file_from, file_to;
int c1,c2;
char *buffer;


buffer = malloc(sizeof(char) * 1024);

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
	exit(97);
}

file_from = open(argv[1],O_RDONLY);
red = read(file_from,buffer,1024);
file_to = open(argv[2],O_CREAT | O_WRONLY | O_APPEND);

while (red > 0)
{
if (red == -1 || file_from == -1)
{
	dprintf(STDERR_FILENO, "Error: can't read from file %s",argv[1]);
	free(buffer);
	exit(98);
}
rite = write(file_to, buffer,red);
if (file_to == -1 || rite == -1)
{
	dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
	free(buffer);
	exit(99);
}
red = read(file_from, buffer, 1024);
file_to = open(argv[2], O_WRONLY | O_APPEND);
}

free(buffer);
c1 = close(file_from);
c2 = close(file_to);


if (c1 == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c1);
	exit(100);
}
if (c2 == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c2);
	exit(100);
}

return (0);

}
