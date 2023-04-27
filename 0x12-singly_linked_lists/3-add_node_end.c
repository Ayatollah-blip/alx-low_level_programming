#include "lists.h"
/**
* add_node_end - function that add a node in a list_t in the end
*
* @head: pointer of a linked lists
* @str: string to be place in node
*
* Return: number of elements of a list_t
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp = *head;
unsigned int len = 0;

while (str[len])
	len++;
new = malloc(sizeof(list_t));
if (!new)
	return (NULL);

new->str = strdup(str);
new->len = len;
new->next = NULL;

if (*head == NULL)
{
	*head = new;
	return (new);
}
while (temp->next)
	temp = temp->next;

temp->next = new;
return (new);
}
