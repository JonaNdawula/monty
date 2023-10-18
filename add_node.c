#include "monty.h"
/**
 *addNode - This function adds a node to the head stack
 *@head: represents the head of the stack
 *@value: represents the new value
 */

void addNode(stack_t **head, int value)
{
	stack_t *newNode, *temp;

	temp = *head;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (temp)
	{
		temp->prev = newNode;
	}
	newNode->n = value;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
}
