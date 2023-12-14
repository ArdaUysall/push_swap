NAME			=	push_swap.a
NAME2			=	push_swap
NAME3			=	checker
NAME4			=	push_swap.c
NAME5			=	checker.c

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
AR				=	ar
ARFLAGS 		=	rcs
RM				=	rm -rf

SRC				=   source1.c  source2.c \
					source3.c  source4.c \
					utils1.c utils2.c \
					utils3.c function2.c \
					function3.c

OBJS			= *.o

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

all:				$(NAME)

$(NAME):			$(LIBFT) $(OBJS)
				cp	$(LIBFT) $(NAME)
					$(AR) $(ARFLAGS) $(NAME) $(OBJS)
					$(CC) $(CFLAGS) -o $(NAME2) $(NAME) $(NAME4)
					$(CC) $(CFLAGS) -o $(NAME3) $(NAME) $(NAME5)

$(OBJS):
				$(CC) $(CFLAGS) -c $(SRC)

$(LIBFT):
					make -C $(LIBFT_PATH) all

clean:
					make -C $(LIBFT_PATH) clean
					$(RM) $(OBJS) $(NAME)

fclean:				clean
					make -C $(LIBFT_PATH) fclean
					$(RM) $(NAME2) $(NAME3)

re:					fclean all

.PHONY:				all clean fclean re libft
