# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tanota <tanota@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 23:49:40 by tanota            #+#    #+#              #
#    Updated: 2022/11/14 23:06:01 by tanota           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=		main.c	\
					ft_display_file.c

NAME		=		ft_display_file

OBJS		=		$(SRCS:.c=.o)

.c.o		:
						gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

$(NAME)		:		$(OBJS)
						gcc -Wall -Wextra -Werror $(OBJS) -o $(NAME)

all			:		$(NAME)

clean		:
						rm -f $(OBJS)

fclean		:		clean
						rm -f $(NAME)

re			:		fclean all