#include <stdio.h>
/**
* main - main program
* Description : print from 0 to 89
*
* Return: 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 48 ; i < 57 ; i++)
	{
		for (j = i + 1 ; j < 58 ; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
return (0);
}
