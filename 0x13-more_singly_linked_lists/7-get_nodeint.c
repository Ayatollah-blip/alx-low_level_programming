#include "lists.h"
/**
* get_nodeint_at_index - finction that get an element from linked list
*
* @head: this the linked list to be printed
* @index: the index where the element you want to be fetched
*
* Return: the element you need
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

listint_t *node = head;
unsigned int i = 0;

if (!head)
	return (NULL);

while (node && i < index)
{
	node = node->next;
	i++;
}
return (node);
}

