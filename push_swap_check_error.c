/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check_error.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:04:14 by bjimenez          #+#    #+#             */
/*   Updated: 2022/06/24 12:09:50 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

long long int	ft_atol(const char *str)
{
	int					i;
	long long int		sig;
	long long int		num;

	i = 0;
	sig = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sig = sig * (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return (num * sig);
}

int	ft_check_ar(char **argv, int n_arg, int argc)
{
	int	x;
	int	y;

	y = 1;
	if (argc == 2)
	{
		y = 0;
		n_arg--;
	}
	while (y <= (n_arg - 1))
	{
		x = 0;
		if (ft_atol(argv[y]) > INT_MAX || ft_atol(argv[y]) < INT_MIN)
			return (1);
		while (argv[y][x] != '\0')
		{
			if (x == 0 && argv[y][x] == '-')
				x++;
			if (ft_isdigit(argv[y][x]) == 0)
				return (1);
			x++;
		}
		y++;
	}
	return (0);
}

int	ft_check_n(int *list, int argc)
{
	int	*p;
	int	x;
	int	y;

	p = list;
	y = 0;
	while (y < argc - 2)
	{
		x = 1;
		while ((x + y) < argc - 1)
		{
			if (*p == list[x + y])
				return (1);
			x++;
		}
		p++;
		y++;
	}
	return (0);
}
