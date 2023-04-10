#include<stdio.h>
/**
* main - program
* Description: function that prints the argv
*
* @argv: vector of string of command line arguments
* @argc: integer number that count the command line arguments
*
* Return: 0 (Success)
*/
int main(int argc, char* argv[])
{
int i;

for(i=0 ; i < argc ; i++)
	printf("%s \n", argv[i]);

return (0);
}
