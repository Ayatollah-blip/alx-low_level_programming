#include <stdio.h>
/**
* main - main function
* description: print alphabets upper and lower case
*
* Return: 0 (Success)
*/
int main(void)
{
	int a = 97;
	int b = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (b < 91)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
return (0);
}
