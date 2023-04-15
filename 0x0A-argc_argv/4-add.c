#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - converts a string to an integer
 * @argc: count the argument input
 * @argv: table of arguments inputs
 *
 * Return: the int converted from the string
 */
int main(int argc, char *argv[])
{

int i, number, sum = 0;

if (argc < 1)
	printf("0\n");

for (i = 1 ; i < argc ; i++)
{
	number = atoi(argv[i]);
	if (number > 0)
	{
		sum = sum + number;
	}
	else if (number == 0)
	{
		printf("Error\n");
		return (1);
	}
}
printf("%d\n", sum);

return (0);
}
