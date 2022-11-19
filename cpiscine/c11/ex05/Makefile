# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tanota <tanota@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 14:40:08 by tanota            #+#    #+#              #
#    Updated: 2022/11/19 14:44:58 by tanota           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=		main.c		\
					operator.c	\
					libft.c		\
					ft_atoi.c

NAME		= 		do-op

OBJS		=		$(SRCS:.c=.o)

HEADERS		=		includes/

.c.o		:
					gcc -Wall -Wextra -Werror -g -I $(HEADERS) -c $< -o $(<:.c=.o)

$(NAME)		:		$(OBJS)
					gcc -Wall -Wextra -Werror -g -I $(HEADERS) $(OBJS) -o $(NAME)

all			:		$(NAME)

clean		:
					rm -f $(OBJS)

fclean		:		clean
					rm -f $(NAME)

re			:		fclean all