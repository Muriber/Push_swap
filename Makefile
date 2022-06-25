# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 09:16:08 by bjimenez          #+#    #+#              #
#    Updated: 2022/06/25 19:53:39 by bjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= push_swap.c push_swap_utils.c push_swap_arg_str.c \
			push_swap_check_error.c push_swap_order_simple.c \
			push_swap_midd_adv.c push_swap_utils_midd_adv_1.c \
			push_swap_simple.c push_swap_utils_midd_adv_2.c \
			push_swap_utils_2.c push_swap_utils_midd_adv_3.c

OBJS		= ${SRCS:.c=.o}

CFLAGS		= -Wall -Wextra -Werror

CC			= gcc

NAME		= libpushswap.a

RM			= rm -f

%.o: %.c
			$(CC) $(CFLAGS) -I include/ -c $< -o $@
			
all:		$(NAME)

$(NAME):	$(OBJS)
			make -C Libft/ all
			cp Libft/libft.a $(NAME)  
			ar rcs ${NAME} ${OBJS}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			make -C Libft/ fclean

re:			fclean all

.PHONY:		all clean fclean re