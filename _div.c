#include "monty.h"
/**
 *_div - div the top towo element.
 *@stack: pointor to the stack.
 *@line_number: line number where pall fn is called.
*/


void _div(stack_t **stack, unsigned int line_number)
{
stack_t *tmp1, *tmp2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't div, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;
	tmp2 = tmp1->next;

	if (tmp1->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	tmp2->n = tmp2->n / tmp1->n;
	delete_node();
	arguments->stack_length -= 1;
}
