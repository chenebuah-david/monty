#include "monty.h"

/**
 * f_add - This is the function that adds the top two elements of the stack
 * @head: This double points at the head to the stack
 * @counter: The line count
 * Return: nothing
 */

void f_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	temp = i->m + i->next->m;
	i->next->m = temp;
	*head = i->next;
	free(i);
}

/**
 * f_sub - This is the function that substracts nodes
 * @head: This double head pointer to the stack
 * @counter: This is the line count
 * Return: Nothing
 */

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int sub, nd;

	temp = *head;
	for (nd = 0; temp != NULL; nd++)
		temp = temp->next;
	if (nd < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sub = temp->next->m - temp->m;
	temp->next->m = sub;
	*head = temp->next;
	free(temp);
}

/**
 * f_mul - This is the function that multiplies
 * the top two elements of the stack
 * @head: This double head pointer to the stack
 * @counter: This is the line count
 * Return: Nothing
 */
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	temp = i->next->m * i->m;
	i->next->m = temp;
	*head = i->next;
	free(i);
}

/**
 * f_div - This is the function that divides the top two elements of the stack
 * @head: This double head pointer to the stack
 * @counter: This is the line count
 * Return: Nothing
 */

void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
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
	temp = i->next->m / i->m;
	i->next->m = temp;
	*head = i->next;
	free(i);
}

/**
 * f_mod - This function calculates the remainder of the division
 * of the second top stack element by the top stack element
 * @head: This double head pointer to the stack
 * @counter: This is the line count
 * Return: Nothing
 */

void f_mod(stack_t **head, unsigned int counter)
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
	temp = i->next->m % i->m;
	i->next->m = temp;
	*head = i->next;
	free(i);
}
