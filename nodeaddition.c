#include "monty.h"

/**
 * addnode - This is the function that adds node to the head stack
 * @head: This is the head of the stac
 * @m: This is a new value
 * Return: Nothing
 */

void addnode(stack_t **head, int m)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = new_node;
	new_node->m = m;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
