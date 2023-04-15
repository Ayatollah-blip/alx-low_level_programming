#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Amounts of cents
 * @argc: count the argument input
 * @argv: table of arguments inputs
 *
 * Return: the int converted from the string
 */
int main(int argc, char *argv[])
{

int i, number, sum = 0;
int tab[4] = {25, 10, 2, 1};

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
number = atoi(argv[1]);
for (i = 0 ; i < 4 ; i++)
{
	if (number >= tab[i])
	{
		sum = sum + (number / tab[i]);
		number = number % tab[i];
	}
}

printf("%d\n", sum);

return (0);
}
