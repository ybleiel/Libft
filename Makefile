# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 15:50:48 by ybleiel           #+#    #+#              #
#    Updated: 2022/01/10 15:10:48 by ybleiel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile -*-

SOURCE =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
			ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

OBJECTS =	$(SOURCE:.c=.o)

BONUS_SOURCE =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				  

BONUS_OBJECTS =		$(BONUS_SOURCE:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

all:	$(NAME)

libft.a:	$(OBJECTS)
	ar rs $(NAME) $(OBJECTS)

$(OBJECTS):	$(SOURCE)
	$(CC) -c $(CFLAGS) $(SOURCE)

$(BONUS_OBJECTS):	$(BONUS_SOURCE)
	$(CC) -c $(CFLAGS) $(BONUS_SOURCE)

bonus:	$(BONUS_OBJECTS)
	ar rs $(NAME) $(BONUS_OBJECTS)

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: 	clean
	rm -f libft.a

re:		fclean all