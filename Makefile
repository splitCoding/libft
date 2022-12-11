NAME	= libft.a

# CC		= cc
# CFLAGS	= -Wall -Wextra -Werror

# INC		= ./libft.h
SRCS	= 	./source/ft_isalpha.c 
			./source/ft_isdigit.c
			./source/ft_isalnum.c
			./source/ft_isascii.c
			./source/ft_isprint.c
			./source/ft_strlen.c
			./source/ft_memset.c
			./source/ft_bzero.c
			./source/ft_memcpy.c
			./source/ft_memmove.c
			./source/ft_strlcpy.c
			./source/ft_strlcat.c
			./source/ft_toupper.c
			./source/ft_tolower.c
			./source/ft_strchr.c
			./source/ft_strrchr.c
			./source/ft_strncmp.cc
			./source/ft_memchr.c
			./source/ft_memcmp.c
			./source/ft_strnstr.c
			./source/ft_atoi.c
			./source/ft_calloc.c
			./source/ft_strdup.c

# all		: $(NAME)

OBJS	: $(SRCS:.c=.o)

%.o		: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean	:
	rm $(OBJS)

# fclean	: clean
# 	rm $(NAME)

# re		: fclean all

$(NAME)	: $(OBJS)
	ar -src $@ $^

# .PHONY	: all bonus clean fclean re