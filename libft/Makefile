# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: milferna <milferna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/07 04:37:42 by milferna          #+#    #+#              #
#    Updated: 2025/03/07 04:42:16 by milferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_strlen.c ft_isdigit.c ft_atoi.c ft_isascii.c ft_memchr.c ft_memset.c\
		ft_memcmp.c ft_memcpy.c ft_strncmp.c ft_isalnum.c ft_strlcat.c\
		ft_isalpha.c ft_memmove.c ft_strlcpy.c ft_strnstr.c ft_tolower.c\
		ft_toupper.c ft_strchr.c ft_strrchr.c ft_isprint.c ft_bzero.c\
		ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c\
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ_FILES = $(SRCS:.c=.o)
$(NAME): $(OBJ_FILES)
	ar -rc $(NAME) $(OBJ_FILES)
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ_FILES)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
all: $(NAME)
.PHONY: all clean fclean re