#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: linked list of type listint_t
 * Return:  the number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t y = 0;
while (h)
{
y++;
h = h->next;
}
return (y);
}
