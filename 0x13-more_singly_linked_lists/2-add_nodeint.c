#include "lists.h"
/**
* add_nodeint - finction that return a integer from linked list
*
* @head: this the linked list to add new elements in
* @n: the int to be added in the new node
*
* Return: the list with the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t node;

node->n = n;
node->next = *head;

return (node);
}

