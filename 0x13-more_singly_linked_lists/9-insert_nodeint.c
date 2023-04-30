#include "lists.h"
/**
* insert_nodeint_at_index - insert an element on idex in the linked list
*
* @head: this the linked list to be printed
* @idx: the index where the element you want to be fetched
* @n: number to be inserted
*
* Return: the element you need
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp2 = *head;
listint_t *node;
unsigned int i = 0;


node = malloc(sizeof(listint_t));

if (!*head || !node)
	return (NULL);

node->n = n;
node->next = NULL;
if (idx == 0)
{
	node->next = temp2;
	temp2 = node;
	return (node);
}

while (temp2 && i < idx)
{
	if (i == idx - 1)
	{
		node->next = temp2->next;
		temp2->next = node;
		return (node);
	}
	else
		temp2 = temp2->next;

	i++;
}

return (NULL);
}

