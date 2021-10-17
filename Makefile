# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoezard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 11:42:41 by acoezard          #+#    #+#              #
#    Updated: 2021/10/11 15:12:55 by acoezard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	   ft_islower.c ft_isupper.c ft_isprint.c ft_isspace.c \
	   ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	   ft_putstr_fd.c ft_atoi.c ft_bzero.c ft_calloc.c \
	   ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
	   ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c \
	   ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c \
	   ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
	   ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	   ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
	   ft_toupper.c ft_striteri.c

OBJS = $(SRCS:.c=.o)

B_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		 ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		 ft_lstclear.c ft_lstiter.c ft_lstmap.c

B_OBJS = $(B_SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}
	ranlib ${NAME}

bonus: ${OBJS} ${B_OBJS}
	ar rcs ${NAME} ${OBJS} ${B_OBJS}
	ranlib ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS} ${B_OBJS}

fclean: clean
	rm -f ${NAME}	

re:	fclean all

.PHONY: bonus all clean fclean re
