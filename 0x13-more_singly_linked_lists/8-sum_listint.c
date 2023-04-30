#include "lists.h"
/**
* sum_listint - function that get the sum from linked list
*
* @head: this the linked list to be printed
* @index: the index where the element you want to be fetched
*
* Return: the sum of all element you need
*/
int sum_listint(listint_t *head)
{
listint_t *node = head;
unsigned int i = 0;
int sum = 0;

if (!head)
	return (0);

while (node)
{
	sum = sum + node->n;
	node = node->next;
	i++;
}
return (sum);
}

