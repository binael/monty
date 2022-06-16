#include "monty.h"

/**
 * print_dlist - prints the contents of a dlist
 * @h: list head
 *
 * Return: void
 */
void print_dlist(const stack_t *h)
{
	if (h != NULL)
	{
		while (h)
		{
			printf("%u\n", h->n);
			h = h->next;
		}
	}
}

/**
 * add_dnodeint - add a node
 * @head: double linked list head
 * @n: const integer
 *
 * Return: address of the new assignment
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
	{
		(*head)->prev = new;
	}

	*head = new;
	dict.size++;

	return (new);
}

/**
 * add_dnodeint_end - adds a node to the end of a double list
 * @head: list head
 * @n: integer value
 *
 * Return: address of the new assignment
 */
stack_t *add_nodeint_end(stack_t **head, const int n)
{
	stack_t *new, *dlist;

	new = malloc(sizeof(stack_t));
	
	if (new == NULL)
	{
		 fprintf(stderr, "Error: malloc failed\n");
		 exit(EXIT_FAILURE);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!head ||!(*head))
	{
		*head = new;
		return (new);
	}

	dlist = *head;

	while (dlist->next)
		dlist = dlist->next;

	new->prev = dlist;
	dlist->next = new;
	dict.size++;

	return (new);
}

/**
 * delete_dnodeint_at_index - deletes a node at a given index value
 * @head: head of doubly linked list
 * @index: unsigned integer index
 *
 * Return: address of the last node
 */
stack_t *delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
	stack_t *dlast, *dlist = *head;
	
	if (!(*head))
		return (NULL);

	if (!index)
	{
		dlist->next = NULL;
		dlist->prev = NULL;
		dict.size--;

		free(dlist);
		return (NULL);
	}
	else
	{
		while (dlist->next)
			dlist = dlist->next;
	}

	dlast = dlist->prev;
	dlast->next = NULL;
	dlist->prev = NULL;
	dict.size--;

	free(dlist);
	return(dlast);
}