#include "monty.h"

/**
 * free_stack - This is the function that frees a doubly linked list
 * @head: his is the head pointer to the stack
 * Return: Nothing
 */

void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
 * f_stack - This is the function that prints the top
 * @head: This is the head of stack
 * @counter: This is the line count
 * Return: Nothing
 */

void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
