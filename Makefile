# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 22:18:57 by bcausseq          #+#    #+#              #
#    Updated: 2024/10/03 22:22:40 by bcausseq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isupper.c ft_islower.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strclr.c ft_strequ.c ft_strnequ.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr.c ft_putchar.c ft_putendl.c ft_putnbr.c ft_itoa.c ft_strjoin.c ft_memalloc.c ft_memdel.c ft_strdel.c ft_strnew.c ft_strsub.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS) 
#ar = archive files & rc = flags (r = insert avec remplacement, c = crée l'archive, visiblement bonne habitude de mettre s = indexe l'archive)
	ranlib $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
