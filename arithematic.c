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
	stack_t *dlist = *stack;
	int sum;

	if (!stack || !(*stack) || !((*stack)->next))
	{
		deallocate(stack);
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	while (dlist->next->next)
		dlist = dlist->next;
	sum = dlist->n + dlist->next->n;
	pop(stack, line_number);
	pop(stack, line_number);

	if (!stack || !(*stack))
		add_dnodeint(stack, sum);
	else
		add_nodeint_end(stack, sum);
	free(dlist);
}

/**
 * add - adds the top two nodes of stack
 * @stack: stack
 * @line_number: unsigned int line number
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *dlist = *stack;
	int sum;

	if (!stack || !(*stack) || !((*stack)->next))
	{
		deallocate(stack);
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	while (dlist->next->next)
		dlist = dlist->next;
	sum = dlist->n + dlist->next->n;
	pop(stack, line_number);
	pop(stack, line_number);

	if (!stack || !(*stack))
		add_dnodeint(stack, sum);
	else
		add_nodeint_end(stack, sum);
	free(dlist);
}

/**
 * add - adds the top two nodes of stack
 * @stack: stack
 * @line_number: unsigned int line number
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *dlist = *stack;
	int sum;

	if (!stack || !(*stack) || !((*stack)->next))
	{
		deallocate(stack);
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	while (dlist->next->next)
		dlist = dlist->next;
	sum = dlist->n + dlist->next->n;
	pop(stack, line_number);
	pop(stack, line_number);

	if (!stack || !(*stack))
		add_dnodeint(stack, sum);
	else
		add_nodeint_end(stack, sum);
	free(dlist);
}

/**
 * add - adds the top two nodes of stack
 * @stack: stack
 * @line_number: unsigned int line number
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *dlist = *stack;
	int sum;

	if (!stack || !(*stack) || !((*stack)->next))
	{
		deallocate(stack);
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	while (dlist->next->next)
		dlist = dlist->next;
	sum = dlist->n + dlist->next->n;
	pop(stack, line_number);
	pop(stack, line_number);

	if (!stack || !(*stack))
		add_dnodeint(stack, sum);
	else
		add_nodeint_end(stack, sum);
	free(dlist);
}

/**
 * add - adds the top two nodes of stack
 * @stack: stack
 * @line_number: unsigned int line number
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *dlist = *stack;
	int sum;

	if (!stack || !(*stack) || !((*stack)->next))
	{
		deallocate(stack);
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	while (dlist->next->next)
		dlist = dlist->next;
	sum = dlist->n + dlist->next->n;
	pop(stack, line_number);
	pop(stack, line_number);

	if (!stack || !(*stack))
		add_dnodeint(stack, sum);
	else
		add_nodeint_end(stack, sum);
	free(dlist);
}
