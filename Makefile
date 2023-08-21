# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vanot <vanot@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 13:53:30 by vanot             #+#    #+#              #
#    Updated: 2023/08/21 13:05:24 by vanot            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = init.c

OBJS = ${SRCS:.c=.o}

NAME = push_swap

LIB = ./libft/libft.a
CC	= cc
RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o :
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${LIB} ${NAME} 

${NAME}:	${OBJS} 
		${CC} ${OBJS} ${LIB} -o ${NAME}

${LIB}:
		make -C ./libft

clean:
		${RM} ${OBJS} ${BONUS}
		make clean -C ./libft


fclean:		clean
		${RM} ${NAME}
		make fclean -C ./libft


re:		fclean all

bonus:		${NAME} ${BONUS}
		${LIB} ${NAME} ${BONUS}

.PHONY:	clean re fclean bonus all
