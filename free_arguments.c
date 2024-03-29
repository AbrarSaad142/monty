#include "monty.h"

/**
 * free_head - free head allocated for the head.
*/

void free_head(void)
{
	if (arguments->head)
		free_stack(arguments->head);
	arguments->head = NULL;
}

/**
*free_arguments - free memory allocated to arguments pointer.
*/

void free_arguments(void)
{
	if (arguments == NULL)
	return;

	if (arguments->instruction)
	{
		free(arguments->instruction);
		arguments->instruction = NULL;
	}

	free_head();
	if (arguments->line)
	{
		free(arguments->line);
		arguments->line = NULL;
	}

	free(arguments);

}
