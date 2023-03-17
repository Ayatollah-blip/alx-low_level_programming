#include <stdio.h>
/**
* main - main function
* Description:write letters lower case except q and e
*
* Return: 0 (Success)
*/
int main(void)
{
	int a = 97;

	while (a < 123)
	{
		if (a != 113 && a != 101)
			putchar(a);
		a++;
	}
	putchar('\n');
return (0);
}
