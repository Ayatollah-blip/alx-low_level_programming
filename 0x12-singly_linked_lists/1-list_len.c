#include "lists.h"
/**
* list_len - function that counts all the elements of a list_t
*
* @h: pointer of a linked lists
*
* Return: number of elements of a list_t
*/
size_t list_len(const list_t *h)
{
size_t temp = 0;

	while (h)
	{
		h = h->next;
		temp++;
	}
return (temp);
}
