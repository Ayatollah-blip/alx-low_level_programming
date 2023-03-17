#include <stdio.h>
/**
* main - main function
* Description: single numbers with putchar
*
* Return: 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
return (0);
}
