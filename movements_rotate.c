#include "push_swap.h"

int	rotate_a(t_list **stacks)
{
	t_list	*aux;

	if (stacks[A])
	{
		aux = stacks[A];
		stacks[A] = stacks[A]->next;
		aux->next = NULL;
		ft_lstadd_back(&stacks[A], aux);
	}
	return (5);
}

int	rotate_b(t_list **stacks)
{
	t_list	*aux;

	if (stacks[B])
	{
		aux = stacks[B];
		stacks[B] = stacks[B]->next;
		aux->next = NULL;
		ft_lstadd_back(&stacks[B], aux);
	}
	return (6);
}

int    rrotate_a(t_list **stacks)	
{
	t_list *penultimate;
	t_list *last;

	if (stacks[A] && stacks[A]->next)
	{
		penultimate = stacks[A];
		last = ft_lstlast(stacks[A]);
		while (penultimate->next != last)
		{
			penultimate = penultimate->next;
		}
		penultimate->next = 0;
		last->next = stacks[A];
		stacks[A] = last;
	}
	return (7);
}

int	rrotate_b(t_list **stacks)
{
	t_list *penultimate;
	t_list *last;

	if (stacks[B] && stacks[B]->next)
	{
		penultimate = stacks[B];
		last = ft_lstlast(stacks[B]);
		while (penultimate->next != last)
		{
			penultimate = penultimate->next;
		}
		penultimate->next = 0;
		last->next = stacks[B];
		stacks[B] = last;
	}
	return (8);
}
