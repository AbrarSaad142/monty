#include "monty.h"

/**
 * pint - print the value at the top of stack.
 * @stack: pointer to stack.
 * @line_number: line number where fn is called.
*/

void pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "L%d: can\t pint, stack empty\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", arguments->head->n);
}
