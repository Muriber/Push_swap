/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_11to500_2.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:30:12 by bjimenez          #+#    #+#             */
/*   Updated: 2022/06/25 19:32:16 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

int	*ft_push_add_a(int *list, int *stack_b, int n_arg, int arg_aux)
{
	int	n_arg_push;
	int	aux;

	n_arg_push = n_arg;
	while (arg_aux < n_arg)
	{
		stack_b = ft_max(stack_b, n_arg_push - 1);
		aux = -1;
		list = ft_push_b_a(list, *stack_b, arg_aux);
		stack_b = stack_b + 1;
		n_arg_push--;
		arg_aux++;
	}
	return (list);
}

int	*ft_push_b_a(int *list, int max, int n_arg_aux)
{
	int	x;

	x = n_arg_aux - 1;
	while (x > 0)
	{
		list[x] = list[x - 1];
		x--;
	}
	list[0] = max;
	write(1, "pa", 2);
	write(1, "\n", 1);
	return (list);
}

int	*ft_rot_b(int *list, int n_num)
{
	int	n_aux;
	int	x;

	x = 0;
	n_aux = list[0];
	while (x < (n_num - 1))
	{
		list[x] = list[x + 1];
		x++;
	}
	list[x] = n_aux;
	write(1, "rb", 2);
	write(1, "\n", 1);
	return (list);
}

int	*ft_rrot_b(int *list, int n_num)
{
	int	n_aux;
	int	x;

	x = n_num - 1;
	n_aux = list[x];
	while (x > 0)
	{
		list[x] = list[x - 1];
		x--;
	}
	list[x] = n_aux;
	write(1, "rrb", 3);
	write(1, "\n", 1);
	return (list);
}
