NAME	:= Colleen
FILE	:= tmp_$(NAME)

SRCS	:= $(NAME).c
OBJS	:= $(SRCS:.c=.o)
CC		:= clang
CFLAGS	:= -Wall -Wextra -Werror

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

.PHONY	: compare
compare	: all
	./$(NAME) > $(FILE)
	diff $(FILE) $(SRCS)

.PHONY	: clean
clean	:
	$(RM) $(OBJS) $(FILE)

.PHONY	: fclean
fclean	: clean
	$(RM) $(NAME)

.PHONY	: re
re		: fclean all

.PHONY	: generate
generate:
	./generate.py $(NAME)_template.c
