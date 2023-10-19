#include "monty.h"

/**
 *addQueue - function that adds a node to the tail of the stack
 *@head: pointer to the stack head
 *@n: represents new line
 *
 */
void addQueue(stack_t **head, int n)
{
	stack_t *new_node;
	stack_t *temp;

	temp = *head;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;

	}
}

/**
 * queueHandler - This function prints the top
 *@head: The stack head
 *@counter: represents the line number
 */
void queueHandler(stack_t **head, unsigned int lineCounter)
{
	(void)head;
	(void)lineCounter;
	bus.stackFlag = 1;
}
