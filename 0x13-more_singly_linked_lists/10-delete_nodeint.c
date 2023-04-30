#include "lists.h"
/**
* delete_nodeint_at_index - delete an element based on idex in the linked list
*
* @head: this the linked list to be printed
* @index: the index where the element you want to be fetched
*
* Return: the element you need
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp1 = *head;
listint_t *temp2 = NULL;
unsigned int i = 0;



if (*head == null)
	return (-1);

if (index == 0)
{
	*head = (*head)->next;
	free(temp1);
	return (1);
}

while (i < index - 1)
{
	if (!temp1 || !(temp1->next))
		return (-1);
	temp1 = temp1->next;
	i++;
}

temp2 = temp1->next;
temp1->next = temp2->next;
free(temp2);
return (1);
}

