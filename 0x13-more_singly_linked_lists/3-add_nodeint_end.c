#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the first element in the list
 * @n:  data to insert in the new element
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node;
listint_t *temp = *head;

node = malloc(sizeof(listint_t));
if (!node)
return (NULL);
node->n = n;
node->next = NULL;
if (*head == NULL)
{
*head = node;
return (node);
}
while (temp->next)
temp = temp->next;
temp->next = node;
return (node);
}
