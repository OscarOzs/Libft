# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/30 18:27:35 by oozsertt          #+#    #+#              #
#    Updated: 2021/10/05 16:23:58 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi_base.c ft_atoi.c ft_convert_base.c ft_convert_fullbinary.c \
ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlen.c ft_tolower.c \
ft_toupper.c ft_utoa_base_uppercase.c ft_utoa_base.c ft_utoa.c \

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJS)
	gcc $(FLAGS) -c $(SRCS)
	ar -rcs $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
