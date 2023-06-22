#include "monty.h"
/**
 * f_add - This adds the top two elements of the stack.
 * @head: This is the stack head
 * @counter: The line_number
 * Return: No return
*/

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *i;
	int len = 0, aux;

	i = *head;
	while (i)
	{
		i = i->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	aux = i->m + i->next->m;
	h->next->m = aux;
	*head = i->next;
	free(i);
}
