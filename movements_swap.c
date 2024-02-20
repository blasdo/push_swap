#include "push_swap.h"

int	swap_a(t_list **stacks)
{
	t_list	*aux;

	if (stacks[A] && stacks[A]->next)
	{
		aux = stacks[A];
		stacks[A] = stacks[A]->next;
		aux->next = stacks[A]->next;
		stacks[A]->next = aux;
	}
	return (3);
}

int	swap_b(t_list **stacks)
{
	t_list	*aux;

	if (stacks[B] && stacks[B]->next)
	{
		aux = stacks[B];
		stacks[B] = stacks[B]->next;
		aux->next = stacks[B]->next;
		stacks[B]->next = aux;
	}
	return (4);
}
