
.PHONY: all bonus clean fclean re

FLAGS=-Wall -Werror -Wextra
NAME=libft.a
CC=cc

BONUS_DEPS=ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
        ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstmap.c

MUST_DEPS=ft_strnstr.c ft_strmapi.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c \
        ft_strjoin.c ft_strncmp.c ft_tolower.c ft_bzero.c ft_isascii.c \
        ft_memchr.c ft_memset.c ft_strlcat.c ft_strrchr.c ft_toupper.c \
        ft_calloc.c ft_isdigit.c ft_memcmp.c ft_strchr.c ft_strlcpy.c \
        ft_isalnum.c ft_isprint.c ft_memcpy.c ft_strdup.c ft_strlen.c \
        ft_substr.c ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c \
        ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c ft_striteri.c

BONUS_OBJS=$(BONUS_DEPS:.c=.o)
MUST_OBJS=$(MUST_DEPS:.c=.o)

$(NAME): $(MUST_OBJS)
	ar -rc $(NAME) $(MUST_OBJS)

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

bonus: $(MUST_OBJS) $(BONUS_OBJS)
	ar -rc $(NAME) $(MUST_OBJS) $(BONUS_OBJS)

all: $(NAME)

clean:
	rm -f $(MUST_OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
