CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes
NAME = libft.a
HEADERS = includes/libft.h includes/bool.h includes/color.h \
	includes/get_next_line.h includes/lst.h includes/math.h includes/vec.h \
	includes/bool.h includes/wchar.h
OBJECTS = srcs/ft_memset.o srcs/ft_bzero.o srcs/ft_memcpy.o srcs/ft_memccpy.o \
	srcs/ft_memmove.o srcs/ft_memchr.o srcs/ft_memcmp.o srcs/ft_strlen.o \
	srcs/ft_strlcpy.o srcs/ft_strlcat.o srcs/ft_strchr.o srcs/ft_strrchr.o \
	srcs/ft_strnstr.o srcs/ft_strncmp.o srcs/ft_atoi.o srcs/ft_isalpha.o \
	srcs/ft_isdigit.o srcs/ft_isalnum.o srcs/ft_isascii.o srcs/ft_isprint.o \
	srcs/ft_toupper.o srcs/ft_tolower.o srcs/ft_calloc.o srcs/ft_strdup.o \
	srcs/ft_substr.o srcs/ft_strjoin.o srcs/ft_strtrim.o srcs/ft_split.o \
	srcs/ft_itoa.o srcs/ft_strmapi.o srcs/ft_putchar_fd.o srcs/ft_putstr_fd.o \
	srcs/ft_putendl_fd.o srcs/ft_putnbr_fd.o
OBJECTS += srcs/ft_strappend.o srcs/ft_str_endswith.o \
	srcs/ft_str_startswith.o srcs/ft_char_count.o srcs/ft_strcmp.o
OBJECTS += srcs/lst/ft_lstnew.o srcs/lst/ft_lstadd_front.o \
	srcs/lst/ft_lstsize.o srcs/lst/ft_lstlast.o srcs/lst/ft_lstadd_back.o \
	srcs/lst/ft_lstdelone.o srcs/lst/ft_lstclear.o srcs/lst/ft_lstiter.o \
	srcs/lst/ft_lstmap.o
OBJECTS += srcs/math/ft_ceil.o srcs/math/ft_floor.o srcs/math/ft_isnan.o \
	srcs/math/ft_isninf.o srcs/math/ft_isninf.o srcs/math/ft_ispinf.o
OBJECTS += srcs/vec/abs.o srcs/vec/add.o srcs/vec/addv.o srcs/vec/div.o \
	srcs/vec/from.o srcs/vec/inv.o srcs/vec/mul.o srcs/vec/mulv.o
OBJECTS += srcs/get_next_line/get_next_line.o \
	srcs/get_next_line/get_next_line_utils.o
OBJECTS += srcs/wchar/ft_wcharlen.o srcs/wchar/ft_wstrlen.o \
	srcs/wchar/ft_wstr_to_str.o
OBJECTS += srcs/color/rgb_to_int.o srcs/color/int_to_rgb.o

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(HEADERS) $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
