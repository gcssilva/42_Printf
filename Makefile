NAME	=	libftprintf.a

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

LIBFT 	= 	42_Libft

HEADER 	= 	ft_printf.h -L./42_Libft -lft

RM		=	rm -f

HEADER 	= 	ft_printf.h

SRC		=	ft_printf.c ft_printf_s.c ft_printf_d.c ft_printf_p.c\
ft_printf_u.c ft_printf_x.c ft_print_arg.c

OBJ		=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			make -C $(LIBFT)
			cp 42_Libft/libft.a ./$(NAME)
			ar rcs $(NAME) $(OBJ)
			ranlib $(NAME)

.o.c:
	@$(CC) $(CFLAGS) -I $(HEADER) -o -c

clean:
			$(RM) $(OBJ)
			make clean -C $(LIBFT)

fclean:	clean
			$(RM) $(NAME)
			make fclean -C $(LIBFT)

re:	fclean	all