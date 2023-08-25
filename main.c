#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * main - Entry point to the monty interpreter program.
 * @argc: No of command line arguments supplied by user
 * @argv: A pointer to array of command line arguments.
 *
 * Return: Always 0. (Success).
 */

int main(int argc, const char *argv)
{
	FILE *bytecode;
	stack_t *stack = NULL;
	char *line = NULL;
	ssize_t bytes = 0;
	size_t len = 0;
	unsigned int line_no = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	bytecode = fopen(argv[1], "r");
	if (bytecode == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	while (bytes != -1)
	{
		bytes = getline(&line, &len, bytecode)

	}
	free(line);
	fclose(bytecode);


	return (EXIT_SUCCESS);
}
