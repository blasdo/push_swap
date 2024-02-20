#include "push_swap.h"

int	push_a(t_list **stacks)
{
	t_list	*aux;

	if (stacks[B])
	{
		aux = stacks[B];
		stacks[B] = stacks[B]->next;
		ft_lstadd_front(&stacks[A], aux);
	}
	return (1);
}

int	push_b(t_list **stacks)
{
	t_list	*aux;

	if (stacks[A])
	{
		aux = stacks[A]; 
		stacks[A] = stacks[A]->next;
		ft_lstadd_front(&stacks[B], aux);
	}
	return (2);
}
