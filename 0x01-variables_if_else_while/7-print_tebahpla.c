#include <stdio.h>
/**
* main - main function
* description : print all the carcters in reverse
*
* Return: 0 (Success)
*/
int main(void)
{
	int a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
return (0);
}
