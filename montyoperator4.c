#include "monty.h"

/**
 * f_pall - This is the function that prints everything in the stack
 * @head: This double head pointer to the stack
 * @counter: This is the unused line count
 * Return: Nothing
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *i;
	(void)counter;

	i = *head;
	if (i == NULL)
		return;
	while (i)
	{
		printf("%d\n", i->m);
		i = i->next;
	}
}

/**
 * f_swap - This is the function that swaps the top two elements of the stack
 * @head: This is the head of stack
 * @counter: This is the line count
 * Return: Nothing
 */

void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *i;
	int length = 0, temp;

	i = *head;
	while (i)
	{
		i = i->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	temp = i->m;
	i->m = i->next->m;
	i->next->m = temp;
}
