#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: first node
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
#include "lists.h"
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
