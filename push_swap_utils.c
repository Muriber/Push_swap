/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:13:28 by bjimenez          #+#    #+#             */
/*   Updated: 2022/06/22 14:41:01 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

int	*ft_push_to_a(int *stack, int n_stack_b, int n_nbr)
{
	int	n_aux;
	int	x;

	x = n_nbr - 2;
	n_aux = stack[x];
	while (x > 0)
	{
		stack[x] = stack[x - 1];
		x--;
	}
	stack[x] = n_stack_b;
	write(1, "pa", 2);
	write(1, "\n", 1);
	return (stack);
}

int	*ft_push_to(int *stack, int n_nbr)
{
	int	x;

	x = 1;
	while (x < (n_nbr - 1))
	{
		stack[x - 1] = stack[x];
		x++;
	}
	stack[x - 1] = 0;
	write(1, "pb", 2);
	write(1, "\n", 1);
	return (stack);
}

int	*ft_rot(int *list, int n_num)
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
	write(1, "ra", 2);
	write(1, "\n", 1);
	return (list);
}

int	*ft_rrot(int *list, int n_num)
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
	write(1, "rra", 3);
	write(1, "\n", 1);
	return (list);
}

int	*ft_swap(int *list)
{
	int	n_aux;

	n_aux = list[0];
	list[0] = list[1];
	list[1] = n_aux;
	write(1, "sa", 2);
	write(1, "\n", 1);
	return (list);
}
