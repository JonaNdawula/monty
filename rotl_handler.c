#include "monty.h"

/**
 *rotHandler - function that rotates staclk to it's top;
 *@head: represents the stack head
 *@lineCounter: represents the line number
 */

void rotHandler(stack_t **head,
		__attribute__((unused)) unsigned int lineCounter)
{

	stack_t *tempo = *head;
	stack_t	*temp = NULL;


	if (*head == NULL || (*head)->next == NULL)
		return;
	temp = (*head)->next;
	temp->prev = NULL;

	while (tempo->next != NULL)
	{
		tempo = tempo->next;
	}
	tempo->next = *head;
	(*head)->next->prev = tempo;
	(*head)->next = NULL;
	(*head)->prev = tempo;
	*head = temp;
}

