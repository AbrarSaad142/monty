#include "monty.h"

/**
 * swap - swap two top elements.
 * @stack: pointer to stack.
 * @line_number: line number where fn is called.
*/

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't swap, stack too short", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;
	tmp2 = tmp1->next;
	tmp1->next = tmp2->next;
	if (tmp1->next)
		tmp1->next->prev = tmp1;
	tmp2->next = tmp1;
	tmp1->prev = tmp2;
	tmp2->prev = NULL;
	arguments->head = tmp2;
}
