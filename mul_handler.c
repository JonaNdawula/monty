#include "monty.h"

/**
 * mulHandler - is a function that multiplies the top two
 * elements of the stack.
 * @head: is the stack head
 * @lineCounter: is the line number
 *
 */

void mulHandler(stack_t **head, unsigned int lineCounter)
{
	stack_t *hd;
	int length = 0, temp;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", lineCounter);
		fclose(bus.montyFile);
		free(bus.lineContent);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	temp = hd->next->n * hd->n;
	hd->next->n = temp;
	*head = hd->next;
	free(hd);
}
