# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tanota <tanota@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 15:46:14 by tanota            #+#    #+#              #
#    Updated: 2022/11/19 15:46:16 by tanota           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  bsq.c parsing.c parsing2.c utils.c str_to_matrix.c ft_split_number.c ft_solve.c

OBJS = ${SRCS:.c=.o}

NAME = bsq

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c  $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re