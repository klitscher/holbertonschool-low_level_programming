#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint
 * @head: list to free
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		head = ptr;
		ptr = ptr->next;
		free(head);
	}
}
