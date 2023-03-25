#include <stdio.h>
/**
* main - main function
* Description: program that sums the multiple of 3 and 5 below 1024
*
* Return: 0 (Success)
*/


int main(void)
{
int i, sum;

sum = 0;
for (i = 1 ; i < 51 ; i++)
{	
	 sum = sum + i;	
	if (i != 50)
	{
	 	printf("%d, ", sum);
	}
	else
		printf("%d\n", sum);
}


return (0);
}
