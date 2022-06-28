/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_midd_adv_1.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:30:12 by bjimenez          #+#    #+#             */
/*   Updated: 2022/06/27 09:21:54 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

int	*ft_order_array(int *list, int n_num)
{
	int	*auxlist;
	int	i[2];
	int	aux;

	i[0] = -1;
	auxlist = (int *)malloc(sizeof(int) * (n_num - 1));
	if (!auxlist)
		return (NULL);
	while (++i[0] < n_num - 1)
		auxlist[i[0]] = list[i[0]];
	i[0] = -1;
	while (++i[0] < n_num -1)
	{
		i[1] = i[0];
		while (++i[1] < n_num - 1)
		{
			if (auxlist[i[0]] > auxlist[i[1]])
			{
				aux = auxlist[i[0]];
				auxlist[i[0]] = auxlist[i[1]];
				auxlist[i[1]] = aux;
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
