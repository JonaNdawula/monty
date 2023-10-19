#include "monty.h"

/**
 *rotlHandler - function that rotates staclk to it's top;
 *@head: represents the stack head
 *@lineCounter: represents the line number
 */

void rotlHandler(stack_t **head, unsigned int lineCounter)
{
	(void) lineCounter;
	stack_t *tempo = *head;
	stack_t *temp;

	if (*head == NULL || (*head)->next == NULL)
		return;
	temp = (*head)->next;
	temp->prev = NULL;

	for (; tempo->next != NULL; tempo = tempo->next)
	{
	}
	tempo->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tempo;
	(*head) = temp;
}

