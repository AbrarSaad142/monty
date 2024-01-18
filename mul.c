#include "monty.h"
/**
 *mul - mul the top towo element.
 *@stack: pointor to the stack.
 *@line_number: line number where pall fn is called.
*/


void mul(stack_t **stack, unsigned int line_number)
{
stack_t *tmp1, *tmp2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't mul, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;
	tmp2 = tmp1->next;
	tmp2->n = tmp2->n * tmp1->n;
	delete_node();
	arguments->stack_length -= 1;
}
