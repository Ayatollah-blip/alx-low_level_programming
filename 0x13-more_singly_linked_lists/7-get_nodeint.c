#include "lists.h"
/**
* pop_listint - finction that pop a integer from linked list
*
* @head: this the linked list to be printed
*
* Return: the number to be poped
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

listint_t *node;
unsigned int i;

for (i = 0 ; i < index ; i++)
{
	head = (head)->next;
	node = head;

}
return (node ? node : NULL);
}

