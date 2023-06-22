#include "monty.h"

/**
 * f_pstr - This is the function that prints the string
 * starting at the top of the stack followed by a new
 * @head: This is the head of stack
 * @counter: This is the line count
 * Return: Nothing
 */

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *i;
	(void)counter;

	i = *head;
	while (i)
	{
		if (i->m > 127 || i->m <= 0)
		{
			break;
		}
		printf("%c", i->m);
		i = i->next;
	}
	printf("\n");
}
