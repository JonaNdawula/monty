#include "monty.h"

/**
 * pcharHandler - Afunction that prints the char at the top of the stack,
 * followed by the new line
 * @head: represents stack head
 * @lineCounter: represents the line number
 *
 */

void pcharHandler(stack_t **head, unsigned int lineCounter)
{
	stack_t *hd;

	hd = *head;
	if (!hd)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n",
				lineCounter);
		fclose(bus.montyFile);
		free(bus.lineContent);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	if (hd->n > 127 || hd->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n",
				lineCounter);
		fclose(bus.montyFile);
		free(bus.lineContent);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hd->n);
}
