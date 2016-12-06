#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpylypen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/21 16:08:40 by dpylypen          #+#    #+#              #
#    Updated: 2016/12/01 16:53:59 by dpylypen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
OBJECTS1 = objects/ft_memset.o\
			objects/ft_bzero.o\
			objects/ft_memcpy.o\
			objects/ft_memccpy.o\
			objects/ft_memmove.o\
			objects/ft_memchr.o\
			objects/ft_memcmp.o\
			objects/ft_strlen.o\
			objects/ft_strdup.o\
			objects/ft_strcpy.o\
			objects/ft_strncpy.o\
			objects/ft_strcat.o\
			objects/ft_strncat.o\
			objects/ft_strlcat.o\
			objects/ft_strchr.o\
			objects/ft_strrchr.o\
			objects/ft_strstr.o\
			objects/ft_strnstr.o\
			objects/ft_strcmp.o\
			objects/ft_strncmp.o\
			objects/ft_atoi.o\
			objects/ft_isalpha.o\
			objects/ft_isdigit.o\
			objects/ft_isalnum.o\
			objects/ft_isascii.o\
			objects/ft_isprint.o\
			objects/ft_toupper.o\
			objects/ft_tolower.o
OBJECTS2 =	objects/ft_memalloc.o\
			objects/ft_memdel.o\
			objects/ft_strnew.o\
			objects/ft_strdel.o\
			objects/ft_strclr.o\
			objects/ft_striter.o\
			objects/ft_striteri.o\
			objects/ft_strmap.o\
            objects/ft_strmapi.o\
			objects/ft_strequ.o\
			objects/ft_strnequ.o\
			objects/ft_strsub.o\
			objects/ft_strjoin.o\
	        objects/ft_strtrim.o\
            objects/ft_strsplit.o\
			objects/ft_itoa.o\
			objects/ft_putchar.o\
			objects/ft_putstr.o\
			objects/ft_putendl.o\
			objects/ft_putnbr.o\
			objects/ft_putchar_fd.o\
			objects/ft_putstr_fd.o\
			objects/ft_putendl_fd.o\
			objects/ft_putnbr_fd.o
OBJECTS3 =	objects/ft_lstnew.o\
			objects/ft_lstdelone.o\
			objects/ft_lstdel.o\
			objects/ft_lstadd.o\
			objects/ft_lstiter.o\
			objects/ft_lstmap.o\
			objects/ft_lstsize.o\
			objects/ft_lstindex.o\
			objects/ft_lstlast.o\
			objects/ft_lstnew_back.o\
			objects/ft_isspace.o
INCLUDES = -I includes/

all : $(NAME)

objects/%.o: srcs/part1/%.c
	gcc $(CFLAGS) -c -o $@ $< $(INCLUDES)

objects/%.o: srcs/part2/%.c
	gcc $(CFLAGS) -c -o $@ $< $(INCLUDES)

objects/%.o: srcs/part3/%.c
	gcc $(CFLAGS) -c -o $@ $< $(INCLUDES)

$(NAME) : $(OBJECTS1) $(OBJECTS2) $(OBJECTS3)
	ar rc $(NAME) $(OBJECTS1) $(OBJECTS2) $(OBJECTS3)
	ranlib $(NAME)

clean :
	rm -rf $(OBJECTS1)
	rm -rf $(OBJECTS2)
	rm -rf $(OBJECTS3)

fclean : clean
	rm -rf $(NAME)

re :  all