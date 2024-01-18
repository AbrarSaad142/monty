#include "monty.h"
/**
 * validate - check the number of argument.
 * @argc: the number arguments.
*/
void validate(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);

}
