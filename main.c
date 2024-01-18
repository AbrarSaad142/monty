#include "monty.h"

argc_t *arguments = NULL;

/**
 *main - Entry point
 *@argc: the number of command line argument.
 *@argv: a pointer to an array of strings containing.
 *Return: return 0 (success)
*/
int main(int argc, char **argv)
{
	size_t n = 0;

	validate(argc);
	init_arguments();
	get_stream(argv[1]);

	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
		arguments->line_number += 1;
		tokenize_line();
		get_instruction();
		run_instruction();
		free_tokens();
	}
	close_stream();
	free_arguments();

	return (0);
}
