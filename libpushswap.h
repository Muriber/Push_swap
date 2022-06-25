/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libpushswap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:36:46 by bjimenez          #+#    #+#             */
/*   Updated: 2022/06/25 19:36:55 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPUSHSWAP_H
# define LIBPUSHSWAP_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "Libft/libft.h"

void			ft_sel_ft_order(int *list, int n_num);
int				*ft_arr_int(char **data, int n_items);
void			ft_ps_2nbr(int *list);
int				*ft_ps_3nbr(int *list, int n_num);
int				*ft_ps_4nbr(int *list, int argc);
void			ft_ps_5nbr(int *list, int argc);
int				*ft_push_to_a(int *stack, int n_stack_b, int n_nbr);
int				*ft_push_to(int *stack, int n_nbr);
int				*ft_rot(int *list, int n_num);
int				*ft_rrot(int *list, int n_num);
int				*ft_swap(int *list);
int				ft_order(int *list, int n_num);
int				ft_n_str(char *p, char c);
int				*ft_arg2arr_int(char **data, int n_items);
int				ft_check_ar(char **argv, int n_arg, int argc);
int				ft_check_n(int *list, int argc);
void			push_swap_order6_10( int *list, int n_arg);
int				*ft_push_minor(int *list, int n_arg);
int				*ft_push(int *stack, int n_nbr);
int				ft_minor(int *list, int n_arg);
void			ft_push_swap_to200( int *list, int n_arg);
int				*ft_push_add_b(int *stack_b, int minor, int n_arg);
int				*ft_order_array(int *list, int n_num);
int				*ft_sel_mov(int x, int n_arg, int *list, int minor);
int				*ft_push_b_a(int *list, int max, int n_arg);
int				*ft_push_add_a(int *list, int *stack_b, int n_arg, int arg_aux);
int				*ft_max(int *stack, int n_arg);
int				*ft_rrot_b(int *list, int n_num);
int				*ft_rot_b(int *list, int n_num);
void			ft_push_swap_to500(int *list, int n_arg);
long long int	ft_atol(const char *str);
int				ft_minor_pos(int *list, int argc);
int				ft_minor_nbr(int *list, int argc);
int				ft_pivot(int n_pivot, int n_arg, int n);
int				ft_mv200_list(int *order, int *list, int n_arg, int *stack_b);
int				ft_mv500_list(int *order, int *list, int n_arg, int *stack_b);
typedef struct s_point
{
	int	n_pivot;
	int	pivot;
	int	n_arg_aux;
	int	minor;
}				t_point;

#endif
