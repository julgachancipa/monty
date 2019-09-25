#include "monty.h"

/**
 * add - function that adds the top 2 elements of the stack
 * @stack: top of the stack
 * @line_number: # of the line in the .m file
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int add;

	if (!*stack)
	{
		dprintf(STDERR_FILENO,
			"L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	add = tmp->n + tmp->next->n;
	*stack = tmp->next;

	free(temp);
}
