#include "lists.h"
/**
* listint_len - finction that return a integer from linked list
*
* @h: this the linked list to be printed
*
* Return: the number of variable composed of  linked lists
*/
size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
h = h->next;
i++;

}

return (i);
}

