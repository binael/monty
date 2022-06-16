#include "monty.h"

/**
 * get_token - gets the first and second line element
 * @buff: the line
 *
 * Return: 0 (success), 1 (failure)
 */
int get_token(char *buff)
{
	char *token;

	token = strtok(buff, DELIMITER);

	if (token == NULL)
	{
		return (1);
	}
	dict.tok[0] = token;
	token = strtok(NULL, DELIMITER);

	if (token == NULL)
		dict.tok[1] = "a";
	else
		dict.tok[1] = token;

	return (0);
}

/**
 * exec_opcode - executes or finds the opcode
 * @stack: the stack
 *
 * Return: void
 */
void exec_opcode(stack_t **stack)
{
	instruction_t codes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{NULL, NULL}}
		/**
		 * {"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"mul", mul},
		{"mod", mod},
		{"div", div},
		{"rot1", rot1},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotr", rotr},
		{"queue", queue},
		{"stack", stack1},
		{NULL, NULL}};
		*/
	int i;
	unsigned int a = dict.line_number;

	for (i = 0;codes[i].opcode != NULL; i++)
	{
		if (!strcmp(codes[i].opcode, dict.tok[0]))
		{
			(codes[i].f)(stack, dict.line_number);
			return;
		}
	}

	fprintf(stderr, "L%u: unknown instruction %s\n", a, dict.tok[0]);
	deallocate(stack);
	exit(EXIT_FAILURE);
}
