#include "monty.h"
/**
 * f_mod - This computes the remainder of the division of the
 * second top stack element by the top stack element
 * @head: This is the stack head
 * @counter: This is the line_number
 * Return: No return
*/

void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	if (i->m == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = i->next->m % i->m;
	i->next->m = aux;
	*head = i->next;
	free(i);
}
