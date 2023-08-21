# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vanot <vanot@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 18:32:23 by cvan-oot          #+#    #+#              #
#    Updated: 2023/08/21 13:07:38 by vanot            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_strlen.c \
ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c \
ft_strjoin.c \
ft_strtrim.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_print_hex.c \
ft_printf.c \
ft_print_int.c \
ft_print_uns.c \
ft_print_void.c \
ft_print_nbr.c 

BSRC = ft_lstadd_back.c \
ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_front.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c \

OBJS	= ${SRCS:.c=.o}

BONUS	= ${BSRC:.c=.o}

NAME	= libft.a

LIB	= ar rc
CC	= cc
RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o :
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${LIB} ${NAME} ${OBJS}

all:		${NAME} bonus

clean:
		${RM} ${OBJS} ${BONUS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

bonus:		${NAME} ${BONUS}
		${LIB} ${NAME} ${BONUS}

.PHONY:	clean re fclean bonus
