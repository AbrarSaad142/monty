#include "monty.h"
/**
 * pop - remove top element from the stack.
 * @stack: pointer to stack.
 * @line_number: line number where push fn called.
*/
void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	delete_node();
	arguments->stack_length -= 1;

}
