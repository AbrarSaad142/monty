#include "monty.h"


/**
 * malloc_failed - handle error when malloc failed.
*/

void malloc_failed(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_arguments();
	exit(EXIT_FAILURE);
}
