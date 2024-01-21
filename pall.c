#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *y;
	(void)counter;

	y = *head;
	if (y == NULL)
		return;
	while (y)
	{
		printf("%d\n", y->n);
		y = y->next;
	}
}
