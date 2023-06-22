#include "monty.h"
/**
 * f_pall - This prints stack
 * @head: This is the stack head
 * @counter: This is no used
 * Return: No return
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
