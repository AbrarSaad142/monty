#include "monty.h"

/**
 * free_all_args - free all alocated memory.
*/

void free_all_args(void)
{
	close_stream();
	free_tokens();
	free_arguments();
}
