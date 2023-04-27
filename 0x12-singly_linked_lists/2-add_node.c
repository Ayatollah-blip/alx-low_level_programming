#include "lists.h"
/**
* add_node - function that prints all the elements of a list_t
*
* @head: pointer of a linked lists
* @str: string to be place in node
*
* Return: number of elements of a list_t
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
unsigned int len = 0;

while (str[len])
	len++;
temp = malloc(sizeof(list_t));
if (!temp)
	return (NULL);

temp->str = strdup(str);
temp->len = len;
temp->next = *head;
*head = temp;

return (temp);
}
