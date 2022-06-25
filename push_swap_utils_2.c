/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:42:53 by bjimenez          #+#    #+#             */
/*   Updated: 2022/06/24 14:30:27 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

int	ft_minor_pos(int *list, int argc)
{
	int	x;
	int	minor_stack;
	int	minor_pos;

	x = 0;
	minor_pos = 0;
	minor_stack = list[0];
	while (x < (argc - 1))
	{
		if (minor_stack > list[x])
		{
			minor_stack = list[x];
			minor_pos = x;
		}
		x++;
	}
	return (minor_pos);
}

int	ft_minor_nbr(int *list, int argc)
{
	int	x;
	int	minor_stack;
	int	minor_pos;

	x = 0;
	minor_stack = list[0];
	while (x < (argc - 1))
	{
		if (minor_stack > list[x])
		{
			minor_stack = list[x];
			minor_pos = x;
		}
		x++;
	}
	return (minor_stack);
}
