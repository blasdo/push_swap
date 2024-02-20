/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinteger.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:26:55 by bvelasco          #+#    #+#             */
/*   Updated: 2024/01/26 14:01:15 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	check_overflow(char *str)
{
	const char		*limits[2] = {ft_itoa(INT_MAX), ft_itoa(INT_MIN)};
	int				is_ok;

	is_ok = 1;
	if (ft_strlen(limits[0]) == 0 || ft_strlen(limits[1]) == 0)
		is_ok = 0;
	if (str[0] == '-')
	{
		if (ft_strlen(str) > ft_strlen(limits[1]))
			is_ok = 0;
		if (ft_strlen(str) == ft_strlen(limits[1]))
		{
			if (ft_strncmp(limits[1], str, ft_strlen(str)) < 0)
				is_ok = 0;
		}
	}
	else if (ft_strlen(str) > ft_strlen(limits[0]))
		is_ok = 0;
	else if (ft_strlen(str) == ft_strlen(limits[0]))
		if (ft_strncmp(limits[0], str, ft_strlen(limits[0])) < 0)
			is_ok = 0;
	free((void *)limits[0]);
	free((void *)limits[1]);
	return (is_ok);
}

int	ft_isinteger(char *str)
{
	if (ft_isnumber(str, 1) && check_overflow(str))
		return (1);
	else
		return (0);
}
