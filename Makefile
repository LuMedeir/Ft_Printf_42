# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 12:00:30 by lumedeir          #+#    #+#              #
#    Updated: 2023/06/14 16:48:04 by lumedeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
BUILD = ./trash/
VPATH = ./Utils/ ./Convert/
SRC =	ft_printf.c ft_convert_to_char.c \
		ft_convert_to_decimal.c \
		ft_convert_to_str.c ft_strlen.c \
		ft_convert_to_udecimal.c ft_convert_to_uphexa.c \
		ft_itoa_base.c ft_putchar.c \
		ft_convert_to_lowhexa.c ft_putstr.c \
		ft_calloc.c ft_strchr.c \
		ft_unsigned_itoa.c ft_strdup.c \
		ft_itoa.c ft_convert_to_pointer.c\

OBJ = $(addprefix $(BUILD), $(SRC:.c=.o))

all: $(NAME)

$(NAME) : $(OBJ)
		@ar -rcs $(NAME) $(OBJ)
$(BUILD)%.o:%.c
		mkdir -p $(BUILD) 
		$(CC) $(CFLAGS) -c $< -o $@
clean:
		rm -rf $(BUILD)
fclean: clean
		rm -f libftprintf.a
re: fclean all
.PHONY: all clean fclean re