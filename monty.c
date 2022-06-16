#include "monty.h"

/**
 * main - main function for monty
 * @argc: integer number of arguments
 * @argv: command line arguments
 *
 * Return: 0 (success) 1 - (failure)
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	FILE *file_ptr;
	char *buff;
	size_t size = 0;
	stack_t *stack;

	initialize(&stack);

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");

	if (isFile(file_ptr))
	{
		while (getline(&buff, &size, file_ptr) != -1)
		{
			dict.line_number++;

			if (get_token(buff) == 1)
				continue;
			if (!isComment())
				continue;
			exec_opcode(&stack);
		}
	}
	else
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	fclose(file_ptr);
	deallocate(&stack);
	return (0);
}
