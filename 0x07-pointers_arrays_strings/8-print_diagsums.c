#include "main.h"
/**
 * print_diagsums - function
 * @a: array
 * @size: diemsion
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i][j];
		}
	}
	_putchar(sum1);
	_putchar(',');
	_putchar(' ');
	for (i = size; i < 0; i--)
	{
		for (j = size; j < 0; j--)
		{
			if (i == j)
				sum1 += a[i][j];
		}
	}
	_putchar(sum2);
	_putchar('\n');

}
