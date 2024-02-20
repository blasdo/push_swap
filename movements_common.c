#include "push_swap.h"

void	print_movement(int movnum)
{
	if (movnum == 1)
		ft_printf("pa\n");
	else if (movnum == 2)
		ft_printf("pb\n");
	else if (movnum == 3)
		ft_printf("sa\n");
	else if (movnum == 4)
		ft_printf("sb\n");
	else if (movnum == 5)
		ft_printf("ra\n");
	else if (movnum == 6)
		ft_printf("rb\n");
	else if (movnum == 7)
		ft_printf("rra\n");
	else if (movnum == 8)
		ft_printf("rrb\n");
	else if (movnum == 9)
		ft_printf("ss\n");
	else if (movnum == 10)
		ft_printf("rr\n");
	else if (movnum == 11)
		ft_printf("rrr\n");
}
