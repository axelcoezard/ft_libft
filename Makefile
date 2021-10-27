# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 11:42:41 by acoezard          #+#    #+#              #
#    Updated: 2021/10/27 15:36:52 by acoezard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

OBJECTS		=	./bin
SOURCES		=	./sources
INCLUDES	=	./includes

FILES 		=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
				ft_islower.c ft_isupper.c ft_isprint.c ft_isspace.c \
				ft_tolower.c ft_toupper.c \
				ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				ft_putstr_fd.c ft_putunbr_fd.c ft_putunbr_base_fd.c \
				ft_bzero.c ft_calloc.c ft_memccpy.c ft_memchr.c \
				ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c  \
				ft_itoa.c ft_atoi.c ft_split.c \
				ft_strcat.c ft_strchr.c ft_strcpy.c ft_strdup.c \
				ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
				ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
				ft_strtrim.c ft_substr.c ft_striteri.c \
				ft_get_next_line.c \
				ft_printf.c \
				ft_printf/ft_printf_char.c \
				ft_printf/ft_printf_decimal.c \
				ft_printf/ft_printf_hex.c \
				ft_printf/ft_printf_integer.c \
				ft_printf/ft_printf_percent.c \
				ft_printf/ft_printf_ptr.c \
				ft_printf/ft_printf_string.c \
				ft_printf/ft_printf_udecimal.c \
				ft_list/ft_list_create.c \
				ft_list/ft_list_add_front.c \
				ft_list/ft_list_add_back.c \
				ft_list/ft_list_size.c \
				ft_list/ft_list_last.c \
				ft_list/ft_list_remove.c \
				ft_list/ft_list_clear.c \
				ft_list/ft_list_foreach.c \
				ft_list/ft_list_map.c \
				ft_math/ft_abs.c \
				ft_math/ft_exp.c \
				ft_math/ft_max.c \
				ft_math/ft_min.c \
				ft_math/ft_pow.c \
				ft_math/ft_sqrt.c

SRCS		=	$(addprefix ${SOURCES}/, ${FILES})
OBJS		=	$(addprefix ${OBJECTS}/, $(FILES:.c=.o))

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

${OBJECTS}/%.o : ${SOURCES}/%.c
	@mkdir -p $(dir $@)
	${CC} ${CFLAGS} -c $^ -o $@

all: ${NAME}

${NAME}: ${OBJS}
	@echo "● Compilation de la librairie ${NAME}..."
	@ar rcs ${NAME} ${OBJS}

clean:
	@rm -rf ${OBJECTS}

fclean: clean
	@rm -f ${NAME}

re:	fclean all

.PHONY: bonus all clean fclean re
