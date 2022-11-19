# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tanota <tanota@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 15:28:48 by tanota            #+#    #+#              #
#    Updated: 2022/11/10 17:40:35 by tanota           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putchar.c 		\
			ft_swap.c 		\
			ft_putstr.c 	\
			ft_putstr.c 	\
			ft_strlen.c		\
			ft_strcmp.c		\
			
NAME = libft.a

OBJS = ${SRCS:.c=o}

HEADERS = includes/

.c.o =
		${CC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
		arc rc ${NAME} ${OBJS}

all : ${NAME}

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re : fclean all