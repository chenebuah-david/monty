#include "monty.h"

/**
 * f_pchar - This is the function that prints the char at
 * the top of the stack followed by a new line
 * @head: This is the stack head
 * @counter: This is the line count
 * Return: Nothing
 */

void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *i;

	i = *head;
	if (!i)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (i->m > 127 || i->m < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", i->m);
}
