#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* create_file - create text file
*
* @filename: name of the file
* @text_content: content of the file
*
* Return: the real number of letters in file
*/

int create_file(const char *filename, char *text_content)
{
int fp, w, len = 0;


if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
while (text_content[len])
	len++;
}
}
fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
w = write(fp, text_content, len);

if (fp == -1 || w == -1)
	return (-1);



close(fp);

return (1);
}
