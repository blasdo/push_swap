#include "push_swap.h"
short unsigned bit_count_int(int nbr)
{
	int i;
	int mask;

	i = 32;
	mask = 1;
	while (i > 0 && !(nbr&mask<<(i-1)))
		i--;
	return (i);
}

short unsigned max_bit_size(t_list *stack)
{
	short unsigned	max_len;
	short unsigned	len;

	max_len = 0;
	while (stack)
	{
		len = bit_count_int(stack->content.i);
		if (len > max_len)
			max_len = len;
		stack = stack->next;
	}
	return (max_len);
}

void	radix(t_list **stacks)
{
	int	i;
	int	j;
	int	stack_size;	
	int	mask = 1;

	int max_size = max_bit_size(stacks[A]);
	i = 0;
	while (i < max_size)
	{
		stack_size = ft_lstsize(stacks[B]);
		j = 0;
		while (j < stack_size)
		{
			if ((stacks[B]->content.i)&(mask<<(i)))
				print_movement(push_a(stacks));
			else
				print_movement(rotate_b(stacks));
			j++;
		}
		stack_size = ft_lstsize(stacks[A]);
		j = 0;
		while (j < stack_size)
		{
			if (!(stacks[A]->content.i&mask<<(i)))
				print_movement(push_b(stacks));
			else
				print_movement(rotate_a(stacks));
			j++;
		}
		i++;
	}
	stack_size = ft_lstsize(stacks[B]);
	i = 0;
	while (i < stack_size)
	{
		print_movement(push_a(stacks));
		i++;
	}
}
