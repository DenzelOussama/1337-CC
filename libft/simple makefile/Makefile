# -*- MakeFile -*-

#target : dependencies
#action
NAME = abcd
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = a.c b.c c.c d.c changetonum.c main.c
OBJ = $(SRC:.c=.o)
all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(NAME)

%.o : %.c g.h
	 $(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -f $(OBJ)
re : fclean all

fclean: clean
	rm -f $(NAME)
.PHONY : all clean fclean re