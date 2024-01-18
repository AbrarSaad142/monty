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
	instruction_t instructions[] = {
		{"push", &push},
		{"pop", &pop},
		{"pint", &pint},
		{"swap", &swap},
		{"nop", &nop},
		{"add", &add},
		{"pall", &pall},
		{"sub", &sub},
		{"mul", &mul},
		{"div", &_div},
		{NULL, NULL}
	};

	if (arguments->n_tokens == 0) /* no Instructions */
		return;
	for (; instructions[i].opcode != NULL; i++)
	{
		/* compare opcode of Instruction to first token (Instruct..) */
		if (strcmp(instructions[i].opcode, arguments->tokens[0]) == 0)
		{
			arguments->instruction->opcode = instructions[i].opcode;
			arguments->instruction->f = instructions[i].f;
			return;
		}
	}

	invalid_instruction();
}
