/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_11to500_1.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:30:12 by bjimenez          #+#    #+#             */
/*   Updated: 2022/06/22 14:44:09 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

int	*ft_order_array(int *list, int n_num)
{
	int	*auxlist;
	int	i;
	int	j;
	int	aux;

	i = -1;
	auxlist = (int *)malloc(sizeof(int) * (n_num - 1));
	while (++i < n_num - 1)
		auxlist[i] = list[i];
	i = -1;
	while (++i < n_num -1)
	{
		j = i;
		while (++j < n_num - 1)
		{
			if (auxlist[i] > auxlist[j])
			{
				aux = auxlist[i];
				auxlist[i] = auxlist[j];
				auxlist[j] = aux;
			}
		}
	}
	return (auxlist);
}

int	*ft_push_add_b(int *stack_b, int minor, int n_arg)
{
	int	x;

	x = n_arg - 1;
	while (x > 0)
	{
		stack_b[x] = stack_b[x - 1];
		x--;
	}
	stack_b[0] = minor;
	write(1, "pb", 2);
	write(1, "\n", 1);
	return (stack_b);
}

int	*ft_sel_mov(int x, int n_arg_aux, int *list, int minor)
{
	if (x <= ((n_arg_aux - 1) / 2))
		while (list[0] != minor)
			list = ft_rot(list, n_arg_aux - 1);
	else if (x > ((n_arg_aux - 1) / 2))
		while (list[0] != minor)
			list = ft_rrot(list, n_arg_aux - 1);
	list++;
	return (list);
}

int	*ft_max(int *stack, int n_arg)
{
	int	max_stack;
	int	x;
	int	max_pos;

	x = -1;
	max_pos = 0;
	max_stack = stack[0];
	while (++x < (n_arg - 1))
	{
		if (max_stack < stack[x])
		{
			max_stack = stack[x];
			max_pos = x;
		}
	}
	if (max_pos <= (n_arg - 2) / 2)
		while (stack[0] != max_stack)
			stack = ft_rot_b(stack, n_arg - 1);
	else if (max_pos > (n_arg - 2) / 2)
		while (stack[0] != max_stack)
			stack = ft_rrot_b(stack, n_arg - 1);
	return (stack);
}
