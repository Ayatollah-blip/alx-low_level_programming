#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* bower - power function
*
* @n: power degree
*
* Return: the result of power function
*/
unsigned int bower(int n)
{
unsigned int bow = 1;

while (n > 0)
{
	bow = bow * 2;
/*	printf("   Power :%d \n", bow);*/
	n--;
}

return (bow);
}

/**
* binary_to_uint - function that convert binary to uint
*
* @b: pointer of a string
*
* Return: return the binary converted to uint
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int a, sum = 0;
int i, len;


len = strlen(b);

for (i = 0 ; i < len ; i++)
{
if (b[len - i - 1] == '0')
{
	a = 0;
}
else if (b[len - i - 1] == '1')
{
	a = 1;
}
else if (b[len - i] != '0' && b[len - i] != '1' && b[len - i] != '\0')
{
	return (0);
}

if (a == 1)
{
	sum = sum + bower(i);
}
}
return (sum);
}

