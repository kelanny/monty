#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * push - Pushes elements into a stack.
 * @stack: A pointer to double linked list
 * @line_number: Number of lines of in the file.
 *
 * Return: Nothing.
 */

void push(stack_t **stack, unsigned int line_number)
{
	long int value;
	char *endptr;
	stack_t *new_node;

	value = strtol(*line_number);
	if (line_number == endptr || line_number == NULL)
	{
		fprintf(stderr, "L<line_number>: usage: push integer\n");
		return (EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}

/**
 * pall - Print all the elements in a stack.
 * @stack: A pointer to double linked list.
 * @line_number: The line number to read.
 *
 * Return: Nothing.
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
