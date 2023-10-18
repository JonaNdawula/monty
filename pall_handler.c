#include "monty.h"

/**
 * pallHandler - function that prints the stack
 * @head: represents stack head
 * @lineNumber: is not used
 *
 */

void pallHandler(stack_t **head, unsigned int lineNumber)
{
	stack_t *hd;

	(void)lineNumber;

	hd = *head;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
