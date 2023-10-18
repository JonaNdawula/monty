#include "monty.h"
/**
 * executeInstruction - A function that executes the opcode
 * @content: represents the line content
 * @head: represents the head of the linked list
 * @lineCounter: represents the line counter
 * @file: points to the monty file
 *
 * Return: (1)
 */
int executeInstruction(char *content, stack_t **head,
		unsigned int lineCounter, FILE *file)
{
	Instruction_t opst[] = {
		{"push", pushHandler}, {"pall", pallHandler},
		{"pint", pintHandler}, {"pop", PopHandler},
		{"swap", swapHandler}, {"add", addHandler},
		{"nop", nopHandler}, {"sub", subHandler},
		{"div", divHandler}, {"mul", mulHandler},
		{"mod", modHandler}, {"pchar", pcharHandler},
		{"pstr", pstrHandler}, {"rotl", rotlHandler},
		{"rotr", rotrHandler}, {"queue", queueHandler},
		{"stack", stackHandler}, {NULL, NULL}
	};
	unsigned int x = 0;
	char *ops;

	ops = strtok(content, " \n\t");
	if (ops && ops[0] == '#')
	{
		return (0);
	}
	bus.argument = strtok(NULL, " \n\t");
	while (opst[x].opcode && ops)
	{
		if (strcmp(ops, opst[x].opcode) == 0)
		{
			opst[x].f(head, lineCounter);
			return (0);
		}
		x++;
	}
	if (ops && opst[x].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", lineCounter, ops);
		fclose(file);
		free(content);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	return (1);
}
