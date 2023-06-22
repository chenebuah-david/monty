#include "monty.h"

/**
 * f_queue - This is the function that prints the top of the queue
 * @head: This is the head of queue
 * @counter: This is the line count
 * Return: Nothing
 */

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - This is the function that add node to the tail the queue
 * @m: This is the new value
 * @head: This is the head of the queue
 * Return: Nothing
 */

void addqueue(stack_t **head, int m)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->m = m;
	new_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
}
