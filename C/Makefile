RM = rm -rf
CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAMEC = Colleene
NAMEG = Grace
NAMES = Sully

SRCC = Colleene.c
SRCG = Grace.c
SRCS = Sully.c

OBJC = $(SRCC:.c=.o)
OBJG = $(SRCG:.c=.o)
OBJS = $(SRCS:.c=.o)

all: $(NAMEC) $(NAMEG) $(NAMES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAMEC): $(OBJC)
	@$(CC) $(CFLAGS) -o $@ $<

$(NAMEG): $(OBJG)
	@$(CC) $(CFLAGS) -o $@ $<

$(NAMES): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $<

clean:
	@$(RM) $(OBJC) $(OBJG) $(OBJS)

fclean: clean
	@$(RM) Colleene Grace Sully_* Sully

re: fclean all

.PHONY: all colleene grace sully clean fclean re
