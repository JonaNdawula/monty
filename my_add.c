#include "monty.h"
/**
 *addHandler - This function adda the top two elements of the stack
 *@head: represents the stack head
 *@lineCounter: represents the line number
 */
void addHandler(stack_t **head, unsigned int lineCounter)
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

		fprintf(stderr, "L%d: can't add, stack too short\n", lineCounter);
		fclose(bus.montyFile);
		free(bus.lineContent);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	temp = hd->n + hd->next->n;
	hd->next->n = temp;
	*head = hd->next;
	free(hd);
}
