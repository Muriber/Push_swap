/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_midd_adv.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 09:49:24 by bjimenez          #+#    #+#             */
/*   Updated: 2022/06/25 19:45:54 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

void	ft_push_swap_to200(int *list, int n_arg)
{
	int	n_arg_aux;
	int	*stack_b;
	int	*order;

	stack_b = (int *)malloc(sizeof(int) * (n_arg - 2));
	order = ft_order_array(list, n_arg);
	n_arg_aux = ft_mv200_list(order, list, n_arg, stack_b);
	list = ft_push_add_a(list, stack_b, n_arg, n_arg_aux);
	free (order);
	free (stack_b);
}

void	ft_push_swap_to500(int *list, int n_arg)
{
	int	n_arg_aux;
	int	*stack_b;
	int	*order;

	stack_b = (int *)malloc(sizeof(int) * (n_arg - 2));
	order = ft_order_array(list, n_arg);
	n_arg_aux = ft_mv500_list(order, list, n_arg, stack_b);
	list = ft_push_add_a(list, stack_b, n_arg, n_arg_aux);
	free (order);
	free (stack_b);
}
