NAME	=	libasm.a

SRCS	=	ft_read.s \
			ft_strcmp.s \
			ft_strcpy.s \
			ft_strdup.s \
			ft_strlen.s \
			ft_write.s

OBJS	=	$(SRCS:.s=.o)

%.o	: %.s
	nasm -f elf64 $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

test:	all
		@echo "\033[32m[Test de la librairie !]\e[39m"
		gcc  main.c libasm.a  -o run_test
		./run_test
#-Wall -Wextra -Werror
fclean:	clean
		rm -f $(NAME)
		rm -f run_test

re: 	fclean all