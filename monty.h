#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DELIMITER " \t\n\r"

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
	struct stack_s *next;
	struct stack_s *prev;
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
 * struct dictionary - global arguments needed to implement monty
 * @head: points to stack head
 * @tail: points to stack tail
 * @size: integer length of stack
 * @line_number: the current file line monty is processing
 * @tok: array of the first and second element of a given file line
 *
 * Description: External arguments for processing the monty
 */
typedef struct dictionary
{
	stack_t *head;
	stack_t tail;
	char **tok;
	unsigned int line_number;
	int size;
} dictionary_t

extern dictionary_t dict;


#endif
