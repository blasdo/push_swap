#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <libft.h>
# define A 0
# define B 1
// movements
int		push_a(t_list **stacks);
int		push_b(t_list **stacks);
int		swap_a(t_list **stacks);
int		swap_b(t_list **stacks);
int		rotate_a(t_list **stacks);
int		rotate_b(t_list **stacks);
int		rrotate_a(t_list **stacks);
int		rrotate_b(t_list **stacks);
//combined movements
int		swap(t_list **stacks);
int		rotate(t_list **stacks);
int		rrotate(t_list **stacks);

//general
void	radix(t_list **stacks);
void	print_movement(int movnum);
int		*split_to_intarr(char **splitted);
int		*parse_args(int argc, char **argv);
t_list	*init_stack(int *values);
#endif
