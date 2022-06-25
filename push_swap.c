/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:19:59 by bjimenez          #+#    #+#             */
/*   Updated: 2022/06/25 17:22:33 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

int	ft_order(int *list, int n_num)
{
	int	x;

	x = 0;
	while (x < (n_num - 2) && (list[x] < list[x + 1]))
		x++;
	if (x == n_num - 2)
		return (0);
	else
		return (1);
}

int	*ft_arr_int(char **data, int n_items)
{
	int	*list;
	int	x;

	x = 0;
	list = (int *)malloc(sizeof(int) * (n_items - 1));
	while (x < (n_items - 1))
	{
		list[x] = ft_atoi(data[x + 1]);
		x++;
	}
	return (list);
}

void	ft_sel_ft_order(int *list, int n_num)
{
	if (n_num == 3)
		ft_ps_2nbr(list);
	else if (n_num == 4)
		ft_ps_3nbr(list, n_num);
	else if (n_num == 5)
		ft_ps_4nbr(list, n_num);
	else if (n_num == 6)
		ft_ps_5nbr(list, n_num);
	else if (n_num > 6 && n_num <= 11)
		push_swap_order6_10(list, n_num);
	else if (n_num > 11 && n_num <= 200)
		ft_push_swap_to200(list, n_num);
	else if (n_num > 200)
		ft_push_swap_to500(list, n_num);
}

int	main(int argc, char **argv)
{
	int		n_arg;
	int		*list;
	char	**nbr_list;

	n_arg = argc;
	nbr_list = argv;
	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		nbr_list = ft_split(argv[1], ' ');
		n_arg = ft_n_str(argv[1], ' ') + 1;
		list = ft_arg2arr_int(nbr_list, n_arg);
	}
	else
		list = ft_arr_int(nbr_list, n_arg);
	if (ft_check_ar(nbr_list, n_arg, argc) == 1 || ft_check_n(list, n_arg) == 1)
		write(1, "Error\n", 6);
	else if (ft_order(list, n_arg) == 0)
		return (0);
	else
		ft_sel_ft_order(list, n_arg);
	free(list);
	return (0);
}

//	system("leaks -q push_swap");