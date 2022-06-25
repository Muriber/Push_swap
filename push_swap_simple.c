/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_2to5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:29:20 by bjimenez          #+#    #+#             */
/*   Updated: 2022/06/24 14:31:09 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

void	ft_ps_5nbr(int *list, int argc)
{
	int	*stack_a;
	int	minor_stack_b;
	int	minor_pos;

	stack_a = list;
	minor_stack_b = ft_minor_nbr(list, argc);
	minor_pos = ft_minor_pos(list, argc);
	if (minor_pos == 0)
		stack_a = list;
	else if (minor_pos <= 2)
		while (list[0] != minor_stack_b)
			list = ft_rot(list, argc - 1);
	else if (minor_pos > 2)
		while (list[0] != minor_stack_b)
			list = ft_rrot(list, argc - 1);
	stack_a = list;
	if (ft_order(stack_a, argc) == 0)
		return ;
	stack_a = ft_push_to(stack_a, argc);
	stack_a = ft_ps_4nbr(stack_a, (argc - 1));
	stack_a = ft_push_to_a(stack_a, minor_stack_b, argc);
}

int	*ft_ps_4nbr(int *list, int argc)
{
	int	*stack_a;
	int	minor_stack_b;
	int	minor_pos;

	stack_a = list;
	minor_stack_b = ft_minor_nbr(list, argc);
	minor_pos = ft_minor_pos(list, argc);
	if (minor_pos == 0)
		stack_a = list;
	else if (minor_pos == 1)
		list = ft_rot(list, argc - 1);
	else if (minor_pos > 1)
		while (list[0] != minor_stack_b)
			list = ft_rrot(list, argc - 1);
	stack_a = list;
	if (ft_order(stack_a, argc) == 0)
		return (stack_a);
	stack_a = ft_push_to(stack_a, argc);
	stack_a = ft_ps_3nbr(stack_a, (argc - 1));
	stack_a = ft_push_to_a(stack_a, minor_stack_b, argc);
	return (stack_a);
}

int	*ft_ps_3nbr(int *list, int n_num)
{
	int	x;

	x = n_num - 1;
	while (ft_order(list, n_num) != 0)
	{
		if (list[0] > list[1] && list[1] < list[2] && list[0] < list[2])
			list = ft_swap(list);
		else if (list[0] > list[1] && list[1] < list[2] && list[0] > list[2])
			list = ft_rot(list, x);
		else if (list[0] < list[1] && list[1] > list[2] && list[0] > list[2])
			list = ft_rrot(list, x);
		else if (list[0] < list[1] && list[1] > list[2] && list[0] < list[2])
			list = ft_rrot(list, x);
		else if (list[0] > list[1] && list[1] > list[2])
			list = ft_swap(list);
	}
	return (list);
}

void	ft_ps_2nbr(int *list)
{	
	if (list[0] > list[1])
		ft_swap(list);
}
