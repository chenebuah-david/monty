#include "monty.h"
/**
 * addnode - This adds node to the head stack
 * @head: The head of the stack
 * @m: The new_value
 * Return: No return
*/

void addnode(stack_t **head, int m)
{

	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->m = m;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
