# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohan <yohan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 12:08:26 by ycantin           #+#    #+#              #
#    Updated: 2024/04/24 11:47:43 by yohan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr \
ft_memcmp ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr \
ft_substr ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
ft_strnstr ft_strncmp ft_atoi ft_isalpha ft_isdigit ft_isalnum \
ft_isascii ft_isprint ft_toupper ft_tolower ft_calloc ft_strdup \
ft_strjoin ft_strtrim ft_strmapi ft_striteri ft_itoa ft_split

BONUS_SRC = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back\
	ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME): $(SRC:=.o)
	ar rc $(NAME) $(SRC:=.o)

clean:
	$(RM) $(SRC:=.o) $(BONUS_SRC:=.o)

fclean: clean
	$(RM) $(NAME)

re:	fclean $(NAME)

bonus:	$(BONUS_SRC:=.o)
	ar rc $(NAME) $(BONUS_SRC:=.o)