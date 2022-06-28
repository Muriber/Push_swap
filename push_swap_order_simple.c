/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_simple.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:30:20 by bjimenez          #+#    #+#             */
/*   Updated: 2022/06/27 09:31:44 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

int	*ft_push(int *stack, int n_nbr)
{
	int	x;

	x = 1;
	while (x < (n_nbr - 1))
	{
		stack[x - 1] = stack[x];
		x++;
	}
	stack[x - 1] = 0;
	return (stack);
}

int	ft_minor(int *list, int n_arg)
{
	int	minor_stack;
	int	x;

	x = 0;
	minor_stack = list[0];
	while (x < (n_arg - 1))
	{
		if (minor_stack > list[x])
			minor_stack = list[x];
		x++;
	}
	return (minor_stack);
}

int	*ft_push_minor(int *list, int n_arg)
{
	int	*stack_a;
	int	minor_stack_b;
	int	x;
	int	minor_pos;

	x = -1;
	minor_pos = 0;
	minor_stack_b = list[0];
	stack_a = list;
	while (++x < (n_arg - 1))
	{
		if (minor_stack_b > list[x])
		{
			minor_stack_b = list[x];
			minor_pos = x;
		}
	}
	if (minor_pos == 1)
		list = ft_rot(list, n_arg - 1);
	else if (minor_pos > 1)
		while (list[0] != minor_stack_b)
			list = ft_rrot(list, n_arg - 1);
	stack_a = list;
	stack_a = ft_push(stack_a, n_arg);
	return (stack_a);
}

void	*push_swap_order6_10( int *list, int n_arg)
{
	int	n_arg_aux;
	int	*stack_b;
	int	flag;

	stack_b = (int *)malloc(sizeof(int) * (n_arg - 1));
	if (!stack_b)
		return (NULL);
	n_arg_aux = n_arg;
	flag = 1;
	while (n_arg_aux > 1 && ft_order(list, n_arg_aux) != 0)
	{
		if (flag == 0)
			stack_b = ft_push_to(stack_b, n_arg_aux);
		list = ft_push_minor(list, n_arg_aux);
		n_arg_aux--;
		flag = 0;
	}
	while (n_arg_aux < n_arg -1)
	{
		ft_push_to_a(list, stack_b[0], n_arg_aux);
		n_arg_aux++;
	}
	free (stack_b);
	return (0);
}
