#include<stdio.h>
/**
* main - program
* Description: function that prints the number of argc
*
* @argv: vector of string of command line arguments
* @argc: integer number that count the command line arguments
*
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);

return (0);
}
