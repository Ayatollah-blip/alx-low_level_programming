#include <stdio.h>
/**
* main - main function
* description: print Hexadecimal caracters
*
* Return: 0 (Success)
*/
int main(void)
{
	int a = 48;
	int b = 97;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	while (b < 103)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
return (0);
}
