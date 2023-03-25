#include <stdio.h>
/**
* main - main function
* Description: program that sums the multiple of 3 and 5 below 1024
*
* Return: 0 (Success)
*/


int main(void)
{
int i;
int  t1, t2, nextTerm;

t1 = 0;
t2 = 1;
nextTerm = t1 + t2;

for (i = 1 ; i < 51 ; i++)
{
	if (i != 50)
	{
	 	printf("%d, ", nextTerm);
	}
	else
		printf("%d\n", nextTerm);
	t1 = t2;
	t2 = nextTerm;
	nextTerm = t1 + t2;
}


return (0);
}
