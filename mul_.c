#include "monty.h"
/**
 * f_mul - This ultiplies the top two elements of the stack
 * @head: This is the stack head
 * @counter: This is the line_number
 * Return: No return
*/

void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	aux = i->next->m * i->m;
	i->next->m = aux;
	*head = i->next;
	free(i);
}
