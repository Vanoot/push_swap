# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vanot <vanot@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 13:53:30 by vanot             #+#    #+#              #
#    Updated: 2023/05/12 14:37:09 by vanot            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = init.c

OBJS = ${SRCS:.c=.o}

NAME = push_swap

LIB = ./Libft/libft.a
CC	= cc
RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o :
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${LIB} ${NAME} 

${NAME}:	${OBJS} 
		${CC} ${OBJS} ${LIB} -o ${NAME}

${LIB}:
		make -C ./Libft

clean:
		${RM} ${OBJS} ${BONUS}
		make clean -C ./Libft


fclean:		clean
		${RM} ${NAME}
		make fclean -C ./Libft


re:		fclean all

bonus:		${NAME} ${BONUS}
		${LIB} ${NAME} ${BONUS}

.PHONY:	clean re fclean bonus all
