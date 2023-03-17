CC = gcc
FLAGS = -Wall -Werror -Wextra

all: colleene grace sully

colleene:
	@$(CC) $(FLAGS) Colleene.c -o Colleene

grace:
	@$(CC) $(FLAGS) Grace.c -o Grace
	
sully:
	@$(CC) $(FLAGS) Sully.c -o Sully_5

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf Colleene Grace Sully_*

re: fclean all

.PHONY: all colleene grace sully clean fclean re
