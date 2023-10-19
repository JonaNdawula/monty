#include "monty.h"
/**
 *freeStack - A function that frees a doubly linked list
 *@head: represents the head of the stack
 */
void freeStack(stack_t *head)
{

	stack_t *temp;

	temp = head;

	while (head)
	{

		temp = head->next;
		free(head);
		head = temp;
	}

}
