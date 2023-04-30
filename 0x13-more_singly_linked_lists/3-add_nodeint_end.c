#include "lists.h"
/**
* add_nodeint_end - finction that return a integer from linked list
*
* @head: this the linked list to add new elements in
* @n: the int to be added in the new node
*
* Return: the list with the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp = *head;
listint_t *node;

node = malloc(sizeof(listint_t));
if (!node)
	return (NULL);

node->n = n;
node->next = NULL;
if (temp == NULL)
{
	*head = node;
	return (node);
}
while (temp->next)
	temp = temp->next;

temp->next = node;

return (temp);
}

