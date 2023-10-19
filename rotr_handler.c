#include "monty.h"

/**
 *rotrHandler - function that rotates the stack to it's bottom
 *@head: represents the stack head
 *@lineCounter: represents line number
 *
 */

void rotrHandler(stack_t **head,
		__attribute__((unused)) unsigned int lineCounter)
{
	stack_t *cpy;

	cpy = *head;

	if (*head == NULL || (*head)->next == NULL)
		return;
	while (cpy->next)
		cpy = cpy->next;
	cpy->next = *head;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*head)->prev = cpy;
	(*head) = cpy;
}
