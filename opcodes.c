#include "monty.h"

/**
 * push - adds a new element to the stack
 * @line_number: integer line number
 * @stack: the stack
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	int value;

	if (dict.tok[1] == NULL || isInteger())
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = atoi(dict.tok[1]);

	if (dict.size == -1)
	{
		dict.head = dict.tail = add_dnodeint(stack, value);
	}
	else
	{
		dict.tail = add_nodeint_end(stack, value);
	}
}

/**
 * pall - prints all the values on the stack starting from the top
 * @stack: stack
 * @line_number: interger line number
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	
	if (!stack || !(*stack))
	{
		return;
	}

	print_dlist(dict.head);
}

/**
 * pint - prints the top of the stack
 * @stack: stack
 * @line_number: integer line number
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	
	printf("%d\n", dict.tail->n);
}

