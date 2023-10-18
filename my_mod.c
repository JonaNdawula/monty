#include "monty.h"
/**
 *modHandler - function that computes the rest of division of
 *the second top element of the stack by the top element of the stack
 *
 *@head: represents the head of the stack
 *@lineCounter: represents line number
 *
 */

void modHandler(stack_t **head, unsigned int lineCounter)
{

	int length = 0, temp;
	stack_t *hd;

	hd = *head;

	while (hd)
	{
		hd = hd->next;
		length++;
	}
	if (length < 2)
	{

		fprintf(stderr, "L%d: can't mod, stack too short\n", lineCounter);
		fclose(bus.montyFile);
		free(bus.lineContent);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	if (hd->n == 0)
	{

		fprintf(stderr, "L%d: can't mod, stack too shart\n", lineCounter);
		fclose(bus.montyFile);
		free(bus.lineContent);
		freeStack(*head);
	}
	temp = hd->next->n % hd->n;
	hd->next->n = temp;
	*head = hd->next;
	free(hd);
}

