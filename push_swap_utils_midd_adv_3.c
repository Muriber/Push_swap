/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_to500_3.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:31:58 by bjimenez          #+#    #+#             */
/*   Updated: 2022/06/25 19:38:38 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

int	ft_mv200_list(int *order, int *list, int n_arg, int *stack_b)
{
	int		y[2];
	t_point	data;	

	data.n_pivot = -1;
	data.n_arg_aux = n_arg;
	while (++data.n_pivot < 6)
	{
		data.pivot = ft_pivot (data.n_pivot, n_arg, 6);
		y[0] = -1;
		while (++y[0] < data.pivot)
		{
			y[1] = 0;
			while (list[y[1]] >= order[data.pivot] && y[1] < data.n_arg_aux - 1)
				y[1]++;
			if (y[1] < data.n_arg_aux - 1)
			{
				data.minor = list[y[1]];
				list = ft_sel_mov(y[1], data.n_arg_aux, list, data.minor);
				stack_b = ft_push_add_b(stack_b, data.minor, n_arg);
				data.n_arg_aux--;
			}
		}
	}
	return (data.n_arg_aux);
}

int	ft_mv500_list(int *order, int *list, int n_arg, int *stack_b)
{
	int		y[2];
	t_point	data;	

	data.n_pivot = -1;
	data.n_arg_aux = n_arg;
	while (++data.n_pivot < 13)
	{
		data.pivot = ft_pivot (data.n_pivot, n_arg, 13);
		y[0] = -1;
		while (++y[0] < data.pivot)
		{
			y[1] = 0;
			while (list[y[1]] >= order[data.pivot] && y[1] < data.n_arg_aux - 1)
				y[1]++;
			if (y[1] < data.n_arg_aux - 1)
			{
				data.minor = list[y[1]];
				list = ft_sel_mov(y[1], data.n_arg_aux, list, data.minor);
				stack_b = ft_push_add_b(stack_b, data.minor, n_arg);
				data.n_arg_aux--;
			}
		}
	}
	return (data.n_arg_aux);
}

int	ft_pivot(int n_pivot, int n_arg, int n)
{
	static int	pivot = 0;

	pivot = pivot + (n_arg - 1) / n;
	if (n_pivot == n - 1)
		pivot = n_arg - 2;
	return (pivot);
}
