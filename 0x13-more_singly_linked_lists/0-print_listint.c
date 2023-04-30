#include "lists.h"
/**
* print_listint - finction that prints a integer from linked list
*
* @h: this the linked list to be printed
*
* Return: the number of variable composed of  linked lists
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h)
{

printf("%d\n", h->n);
h = h->next;
i++;

}

return (i);
}

