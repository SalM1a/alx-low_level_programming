#include "lists.h"
/**
 * insert_nodeint_at_index - t inserts a new node at a given position
 * @head:  pointer to the first node
 * @idx:  index where new node is added
 * @n: data to insert
 * Return: he address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *node;
listint_t *temp = *head;
node = malloc(sizeof(listint_t));
if (!node || !head)
return (NULL);
node->n = n;
node->next = *head;

if (idx == 0)
{
node->next = *head;
*head = node;
return (node);
}
for (i = 0; temp && i < idx; i++)
if (i == idx - 1)
{
node->next = temp->next;
temp->next = node;
return (node);
}
else
{
temp = temp->next;
}
return (NULL);
}
