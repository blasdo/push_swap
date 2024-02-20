#include "push_swap.h"

int	*split_to_intarr(char **splitted)
{
	int	nos;
	int	i;
	int	*result;

	nos = 0;
	i = 0;
	while (splitted[nos] != 0)
		nos++;
	result = malloc(nos + 1 * sizeof(int));
	result[i] = nos;
	while (i < nos)
	{
		if (ft_isinteger(splitted[i]))
			result[i + 1] = ft_atoi(splitted[i]);
		else
		{
			free(result);
			return (NULL);
		}
		i++;
	}
	return (result);
}

int	*parse_args(int argc, char **argv)
{
	char	*str;
	char	*aux;
	int		*result;
	char	**unified_args;
	int		i;

	str = 0;
	i = 1;
	while (i < argc)
	{
		aux = str;
		str = ft_strjoin(str, " ");
		free(aux);
		aux = str;
		str = ft_strjoin(str, argv[i++]);
		free(aux);
	}
	unified_args = ft_split(str, ' ');
	result = split_to_intarr(unified_args);
	ft_free_ptr_array((void **)unified_args);
	return (result);
}

t_list *init_stack(int *values)
{
	t_list	*result;
	t_list	*newnode;
	int		*sorted_values;
	int		i;
	int		j;

	result = 0;
	i = 0;
	sorted_values = malloc(values[0] * sizeof(int));
	ft_memcpy(sorted_values, values + i, values[0] * sizeof(int));
	bubblesort_int(sorted_values, values[0]);
	while (i < values[0])
	{
		j = 0;
		while (j < values[0] && values[i + 1] != sorted_values[j])
			j++;
		newnode = ft_lstnew_type(INT, (t_content) j);
		ft_lstadd_back(&result, newnode);
		i++;
	}
	return (result);
}

int main(int argc, char *argv[])
{
	int	*parsed_args;
	t_list *stacks[2];

	if (argc < 2)
		return 0;
	parsed_args = parse_args(argc, argv);
	if (!parsed_args)
		return (0);
	stacks[A] = init_stack(parsed_args);
	if (!stacks[A])
		return (0);
	stacks[B] = NULL;
	radix(stacks);
	return (0);
}
