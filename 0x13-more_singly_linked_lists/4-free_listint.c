#include "lists.h"
/**
 * free_listint - frees a linked lists
 * @head: head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		head = temp;
		head = head->next;
		free(temp);
	}
}
