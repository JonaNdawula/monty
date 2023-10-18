#include "monty.h"

/**
 * pintHandler - A function that prints the top
 * @head: represents the stack head
 * @lineNumber: represents the line number
 *
 */

void pintHandler(stack_t **head, unsigned int lineNumber)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", lineNumber);
		fclose(bus.montyFile);
		free(bus.lineContent);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
