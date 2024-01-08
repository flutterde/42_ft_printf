CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar -rcs
RM = rm -rf
NAME = libftprintf.a

SRCS = ft_helpers.c ft_hexa_handler.c ft_printf.c  handler_bonus.c macros_bonus.c


OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@ 

bonus : all

clean : 
	$(RM) *.o 

fclean : clean
	$(RM) $(NAME)

re: fclean all
