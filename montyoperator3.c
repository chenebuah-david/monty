#include "monty.h"

/**
 * f_pop - This is the function that prints the top of the stack
 * @head: This double head pointer to the stack
 * @counter: This is the line count
 * Return: Nothing
 */

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *i;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	*head = i->next;
	free(i);
}

/**
 * f_pint - This is the function that prints the top of the stack
 * @head: This double head pointer to the stack
 * @counter: This is the line count
 * Return: Nothing
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->m);
}

/**
 * f_nop - This is the function that does nothing
 * @head: This double head pointer to the stack
 * @counter: This is the line count
 * Return: Nothing
 */

void f_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
