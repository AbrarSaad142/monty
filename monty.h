#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE  200809L
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>
#include <string.h>




/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/

typedef struct stack_s
{
		int n;
		struct stack_s *prev;
		struct stack_s *next;
} stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;

	void (*f)(stack_t **stack, unsigned int line_number);

} instruction_t;

/**
* struct argc_s - hold variables.
* @stream: pointer to the file.
* @line: line of text read from stream.
* @line_number: line number.
* @tokens: used to store tokens from line.
* @n_tokens: number of tokens created from line.
* @instruction: instruction from line.
* @head: pointer to the stack
* @stack_length: length of the stack
* Description: hold variables that will be
*used in differen fn
*/
typedef struct argc_s
{
	FILE *stream;
	char *line;
	unsigned int line_number;
	char **tokens;
	int n_tokens;
	instruction_t *instruction;
	struct stack_s *head;
	unsigned int stack_length;
} argc_t;

extern argc_t *arguments;
void malloc_failed(void);
void validate(int argc);
int is_number(char *str);
void init_arguments(void);
void get_stream(char *filename);
void get_instruction(void);
void tokenize_line(void);
void free_tokens(void);
void run_instruction(void);
void close_stream(void);
void free_arguments(void);
void free_stack(stack_t *head);
void delete_node(void);
void free_all_args(void);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);

#endif
