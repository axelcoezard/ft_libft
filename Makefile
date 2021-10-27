# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 11:42:41 by acoezard          #+#    #+#              #
#    Updated: 2021/10/27 15:18:49 by acoezard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BINARIES = ./bin
SOURCES = ./sources
INCLUDES = ./includes

COMMON_FILES =	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
				ft_islower.c ft_isupper.c ft_isprint.c ft_isspace.c \
				ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				ft_putstr_fd.c ft_atoi.c ft_bzero.c ft_calloc.c \
				ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
				ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c \
				ft_strcat.c ft_strchr.c ft_strcpy.c \
				ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
				ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
				ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
				ft_toupper.c ft_striteri.c \
				ft_putunbr_fd.c ft_putunbr_base_fd.c ft_printf.c \
				ft_get_next_line.c

PRINTF_FILES =	ft_printf/ft_printf_char.c \
				ft_printf/ft_printf_decimal.c \
				ft_printf/ft_printf_hex.c \
				ft_printf/ft_printf_integer.c \
				ft_printf/ft_printf_percent.c \
				ft_printf/ft_printf_ptr.c \
				ft_printf/ft_printf_string.c \
				ft_printf/ft_printf_udecimal.c

LIST_FILES =	ft_list/ft_list_create.c \
				ft_list/ft_list_add_front.c \
				ft_list/ft_list_add_back.c \
				ft_list/ft_list_size.c \
				ft_list/ft_list_last.c \
				ft_list/ft_list_remove.c \
				ft_list/ft_list_clear.c \
				ft_list/ft_list_foreach.c \
				ft_list/ft_list_map.c

MATH_FILES =	ft_math/ft_abs.c \
				ft_math/ft_exp.c \
				ft_math/ft_max.c \
				ft_math/ft_min.c \
				ft_math/ft_pow.c \
				ft_math/ft_sqrt.c

COMMON_SRCS = $(addprefix ${SOURCES}/, ${COMMON_FILES})
PRINTF_SRCS = $(addprefix ${SOURCES}/, ${PRINTF_FILES})
LIST_SRCS = $(addprefix ${SOURCES}/, ${LIST_FILES})
MATH_SRCS = $(addprefix ${SOURCES}/, ${MATH_FILES})

COMMON_OBJS = $(addprefix ${BINARIES}/, $(COMMON_FILES:.c=.o))
PRINTF_OBJS = $(addprefix ${BINARIES}/, $(PRINTF_FILES:.c=.o))
LIST_OBJS = $(addprefix ${BINARIES}/, $(LIST_FILES:.c=.o))
MATH_OBJS = $(addprefix ${BINARIES}/, $(MATH_FILES:.c=.o))

CC = gcc

CFLAGS = -Wall -Wextra -Werror

bin/%.o : sources/%.c
	@mkdir -p $(dir $@)
	${CC} ${CFLAGS} -c $^ -o $@

all: ${NAME}

${NAME}: ${COMMON_OBJS} ${PRINTF_OBJS} ${LIST_OBJS} ${MATH_OBJS}
	@echo "● Compilation de la librairie ${NAME}..."
	@ar rcs ${NAME} ${COMMON_OBJS} ${PRINTF_OBJS} ${LIST_OBJS} ${MATH_OBJS}

clean:
	@rm -rf ${BINARIES}

fclean: clean
	@rm -f ${NAME}

re:	fclean all

.PHONY: bonus all clean fclean re
