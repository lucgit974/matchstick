SRC		=	$(wildcard *.c)

OBJ 	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a	$(OBJ)
	cp $(NAME) ../
	cp *.h ../../include

clean:
	rm -f $(OBJ)
	rm -f *~
fclean: clean
	rm -f $(NAME)

re: fclean all