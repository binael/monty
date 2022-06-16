#include "monty.h"

/**
 * initialize - initialize all stack and extern variables
 * @stack: stack variable
 *
 * Return: void
 */

void initialize(stack_t **stack)
{
	(*stack)->next = NULL;
	(*stack)->prev = NULL;
	dict.head = NULL;
	dict.tail = NULL;
	dict.line_number = 0;
	dict.size = 0;

	dict.tok = malloc(sizeof(char *) * 2);

	if (dic.tok == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}
