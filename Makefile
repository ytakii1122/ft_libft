# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 16:54:02 by ytakii            #+#    #+#              #
#    Updated: 2022/02/24 23:02:17 by ytakii           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a 

CC	= cc

CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_isalpha.c ft_isascii.c ft_isalnum.c  ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strrchr.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_atoi.c ft_bzero.c ft_calloc.c ft_strdup.c ft_strlcat.c ft_strnstr.c\
		  ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c\
		  ft_strmapi.c\
		  ft_itoa.c ft_strtrim.c ft_split.c ft_striteri.c
OBJS	= $(SRCS:.c=.o)
AR	= ar rcs
RM	= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

test: re all
	$(CC) $(CFLAGS) $(NAME)
	./a.out

.PHONY: all, clean, fclean, re, test
