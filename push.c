#define GLOBALS
#include "monty.h"

/**
 * push - function that pushes an element to the stack
 * @stack: header of the stack
 * @line_number: number of line in the .m file
 * Return: nothing
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	if (gbl.num == NULL || is_a_num(gbl.num) == 0)
	{
		dprintf(STDERR_FILENO,
			"L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (*stack == NULL)
	{
		new->n = atoi(gbl.num);
		new->prev = NULL;
		new->next = *stack;
		*stack = new;
	}
	else
	{
		new->n = atoi(gbl.num);
		(*stack)->prev = new;
		new->prev = NULL;
		new->next = *stack;
		*stack = new;
	}
}
