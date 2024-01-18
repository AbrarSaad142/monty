#include "monty.h"


/**
 * init_arguments - init a pointer to argc_s structure.
*/

void init_arguments(void)
{
	arguments = malloc(sizeof(argc_t));
	if (arguments == NULL)
	malloc_failed();
	arguments->instruction = malloc(sizeof(instruction_t));
	if (arguments->instruction == NULL)
		malloc_failed();
	arguments->stream = NULL;
	arguments->line = NULL;
	arguments->n_tokens = 0;
	arguments->line_number = 0;
}
