#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* append_text_to_file - create text file
*
* @filename: name of the file
* @text_content: content of the file
*
* Return: the real number of letters in file
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fp, w, len = 0;


if (filename == NULL)
	return (-1);

if (text_content != NULL)
{
for (len = 0 ; text_content[len];)
{
	len++;
}
}

fp = open(filename, O_WRONLY | O_APPEND);
w = write(fp, text_content, len);

if (fp == -1 || w == -1)
	return (-1);



close(fp);

return (1);
}
