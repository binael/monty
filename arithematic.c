#include "monty.h"

/**
 * add - adds the top two nodes of stack
 * @stack: stack
 * @line_number: unsigned int line number
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *second, *first;
	int sum;

	if (!stack || !(*stack) || !((*stack)->next))
	{
		deallocate(stack);
		fprintf(stderr, "L%u: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}

	second = delete_dnodeint_end(stack);
	first = delete_dnodeint_end(stack);
	sum = first->n + second->n;
	push(stack, sum);
	free(first);
	free(second);
}

