#include "monty.h"

/**
 * f_push - This is the function that adds node to the stack
 * @head: This double head pointer to the stack
 * @counter: This is the line count
 * Return: Nothing
 */

void f_push(stack_t **head, unsigned int counter)
{
	int j, o = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			o++;
		for (; bus.arg[o] != '\0'; o++)
		{
			if (bus.arg[o] > 57 || bus.arg[o] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	j = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, j);
	else
		addqueue(head, j);
}
