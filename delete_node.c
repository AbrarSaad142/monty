	#include "monty.h"

/**
 * delete_node - delete node at the top;
*/
void delete_node(void)
{
	stack_t *tmp;

	tmp = arguments->head;
	arguments->head = tmp->next;
	free(tmp);
}
