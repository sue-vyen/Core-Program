# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sloke <sloke@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 14:51:08 by sloke             #+#    #+#              #
#    Updated: 2023/06/06 15:51:33 by sloke            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC  = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
        ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

OBJS = $(SRCS:.c=.o)

B_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \

B_OBJS = $(B_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME) $(B_OBJS)
	ar rcs $(NAME) $(B_OBJS)

clean:
	rm -f $(OBJS) $(B_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re        