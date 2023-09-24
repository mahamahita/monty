#include "monty.h"

/**
 * rotl - s
 * @stack: Double linked list
 * @line_number: File line execut
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tm = *stack;
	(void) line_number;

	if (!stack || !*stack || !(*stack)->next)
		return;
	(*stack)->next->prev = NULL;
	while (tm->next)
		tm = tm->next;
	tm->next = *stack;
	(*stack) = (*stack)->next;
	tm->next->next = NULL;
	tm->next->prev = tm;
}

/**
 * rotr - s
 * @stack: Double linked list
 * @line_number: File line execut
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void) line_number;

	if (!stack || !*stack || !(*stack)->next)
		return;

	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = *stack;
	tmp->prev->next = NULL;
	tmp->prev = NULL;

	(*stack)->prev = tmp;
	*stack = tmp;

}

/**
 * stack - s
 * @stack: Double linked list
 * @line_number: File line execut
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	(void) stack;

	var.MODE = 0;
}

/**
 * queue - s
 * @stack: Double linked list
 * @line_number: File line execut
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	(void) stack;

	var.MODE = 1;
}

