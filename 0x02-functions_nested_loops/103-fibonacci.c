#include <stdio.h>
/**
* main - main function
* Description: program that sums the multiple of 3 and 5 below 1024
*
* Return: 0 (Success)
*/


int main(void)
{
long int  t1, t2, nextTerm, sum;

sum = 0;
t1 = 0;
t2 = 1;
nextTerm = t1 + t2;

while (nextTerm < 4000000)
{
	t1 = t2;
	t2 = nextTerm;
	nextTerm = t1 + t2;
	if ((nextTerm % 2) == 0)
	{
		sum = sum + nextTerm;
	}
}

printf("%ld\n", sum);
return (0);
}
