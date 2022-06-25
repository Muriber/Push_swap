/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_arg_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 09:30:34 by bjimenez          #+#    #+#             */
/*   Updated: 2022/06/24 12:24:03 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

int	ft_n_str(char *p, char c)
{
	int	ns;
	int	i;
	int	c_sstr;

	ns = 0;
	i = 0;
	c_sstr = 1;
	while (p[i] != '\0')
	{
		if (p[i] != c && c_sstr == 1)
		{			
			ns++;
			c_sstr = 0;
		}
		else if (p[i] == c)
			c_sstr = 1;
		i++;
	}
	return (ns);
}

int	*ft_arg2arr_int(char **data, int n_items)
{
	int	*list;
	int	x;

	x = 0;
	list = (int *)malloc(sizeof(int) * (n_items));
	while (x < (n_items - 1))
	{
		list[x] = ft_atoi(data[x]);
		x++;
	}
	return (list);
}
