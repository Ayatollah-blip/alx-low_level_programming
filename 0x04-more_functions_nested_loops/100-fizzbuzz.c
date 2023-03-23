#include "main.h"
/**
* main - function
* Description: function that draw a square
*
* Return:  0 (Success)
*
*/

void printFizz(void);
void printBuzz(void);

int main(void)
{
int i, u, d;

for (i = 1 ; i <= 100 ; i++)
{

	if ((i % 3) == 0 && (i % 5) == 0)
	{	printFizz();
		printBuzz();
		_putchar(' ');
	}
	else if ((i % 3) == 0 && (i % 5) != 0)
	{
		printFizz();
		_putchar(' ');
	}
	else if ((i % 5) == 0 && (i % 5) != 0)
	{
		printBuzz();
		_putchar(' ');
	}
	else
	{
		if (i < 10)
		{
			_putchar(i + '0');
			_putchar(' ');
		}
		else
		{
		u = i % 10;
		d = i / 10;
		_putchar(d + '0');
		_putchar(u + '0');
		_putchar(' ');
		}
	}
}
_putchar('\n');
return (0);
}

void printFizz(void)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
}
void printBuzz(void)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}






