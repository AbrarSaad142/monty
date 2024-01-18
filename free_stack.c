#include "monty.h"

/**
 * free_stack - free node in the stack.
 * @head: first node in listlink.
*/

void free_stack(stack_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_stack(head->next);
	}
	free(head);
}
