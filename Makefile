CC=gcc
CFLAGS=-Wall -Wextra -Werror -I.
HEADERS=libft.h
OBJECTS=ft_bzero.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strlen.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strlcpy.o ft_strlcat.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o 
BONUS_OBJECTS=ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstdelone_bonus.o ft_lstclear_bonus.o ft_lstiter_bonus.o ft_lstmap_bonus.o
NAME=libft.a

.PHONY: all clean fclean re bonus

bonus: $(NAME)

all: $(NAME)

$(NAME): $(HEADERS) $(OBJECTS) $(BONUS_OBJECTS)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
