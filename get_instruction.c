#include "monty.h"

/**
*invalid_instruction - handle an unknown instruction error.
*/
void invalid_instruction(void)
{
	dprintf(2, "L%d: unknown instruction %s\n",
			arguments->line_number, arguments->tokens[0]);

	close_stream();
	free_tokens();
	free_arguments();
	exit(EXIT_FAILURE);
}

/**
*get_instruction - set instruction based on the first tokn.
*/

void get_instruction(void)
{
	int i = 0;

	instruction_t instruction[] = {
		{"push", &push}, {"pall", &pall},
		{"pint", &pint}, {"pop", &pop}, {"swap", &swap},
		{"add", &add}, {"nop", &nop}, {NULL, NULL}

	};

	if (arguments->n_tokens == 0)
	return;

	for (; instruction[i].opcode != NULL; i++)
	{
		/* compare opcode of Instruction to first token (instruct..) */
		if (strcmp(instruction[i].opcode, arguments->tokens[0]) == 0)
		{
			arguments->instruction->opcode = instruction[i].opcode;
			arguments->instruction->f = instruction[i].f;
			return;
		}
	}

	invalid_instruction();
}
