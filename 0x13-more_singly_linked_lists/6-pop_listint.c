#include "lists.h"
/**
* free_listint2 - finction that return a integer from linked list
*
* @head: this the linked list to be printed
*/
int pop_listint(listint_t **head)
{
listint_t *node;
int n;

if (*head == NULL)
	return (0);

else
{
	n = (*head)->n;
	node = (*head)->next;
	*head = node;
}

return (n);
}

