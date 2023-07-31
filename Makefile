NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

FILE = \
	ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memset.c\
	ft_strlen.c\
	ft_strchr.c\
	ft_strncmp.c\
	ft_strrchr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_memcpy.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memmove.c\
	ft_strnstr.c\

OBJECTS = $(FILE:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)

clean:
	@rm -rf $(OBJECTS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re