#include "monty.h"

/**
 *divHandler - function that divides the top two elements of the stack
 *@head: represents the head of the stack
 *@lineCounter: represents the line number
 */
void divHandler(stack_t **head, unsigned int lineCounter)
{
	stack_t *hd;
	int length = 0;
	int temp;

	hd = *head;
	while (hd)
	{

		hd = hd->next;
		length++;
	}
	if (length < 2)
	{

		fprintf(stderr, "L%d: can't div, stack too short\n", lineCounter);
		fclose(bus.montyFile);
		free(bus.lineContent);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	if (hd->n == 0)
	{

		fprintf(stderr, "L%d: division by zero\n", lineCounter);
		fclose(bus.montyFile);
		free(bus.lineContent);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	temp = hd->next->n / hd->n;
	*head = hd->next;
	free(hd);
}
