# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vanot <vanot@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 13:53:30 by vanot             #+#    #+#              #
#    Updated: 2023/05/10 14:38:28 by vanot            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 

OBJS = 

NAME = push_swap

LIB = ./Libft/libft.a
CC	= cc
RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o :
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${LIB} ${OBJS}
		${CC} ${LIB} ${OBJS} -o ${NAME}

${LIB}:
		make -C ./Libft

all:		${NAME} bonus

clean:
		${RM} ${OBJS} ${BONUS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

bonus:		${NAME} ${BONUS}
		${LIB} ${NAME} ${BONUS}

.PHONY:	clean re fclean bonus all
