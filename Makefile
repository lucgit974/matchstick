SRC			=	$(wildcard src/*.c)	\
				$(wildcard *.c)

CFLAGS		=	-W -Werror -Wextra -Wall -g

IFLAGS		=	-I include/

LFLAGS		=	-L lib -lmy

NAME		=	matchstick

all:
	make -C lib/my all
	gcc -o $(NAME) $(SRC) $(IFLAGS) $(CFLAGS) $(LFLAGS)

clean:
	make -C lib/my clean
	rm -f *~

fclean:
	make -C lib/my fclean
	rm -f $(NAME)

re: fclean all
	make -C lib/my re