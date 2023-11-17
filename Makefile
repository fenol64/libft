NAME = libft.a

RAW_SRCS= $(find .)
SRCS = $(filter %.c, $(RAW_SRCS))
OBJS = $(SRCS:.c=.o)

COMPILER = cc -Wall -Wextra -Werror

show:
	@echo $(SRCS)
	@echo $(OBJS)

.c.o:
	$(COMPILER) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re: clean fclean $(NAME)


