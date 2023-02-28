NAME = so_long

BONUS = so_long_bonus

FLAGS = -Wall -Wextra -Werror 

SRCS = maps/utils/libft/ft_isalpha.c\
		maps/utils/libft/ft_isdigit.c\
		maps/utils/libft/ft_isalnum.c\
		maps/utils/libft/ft_isascii.c\
		maps/utils/libft/ft_isprint.c\
		maps/utils/libft/ft_strlen.c\
		maps/utils/libft/ft_memset.c\
		maps/utils/libft/ft_bzero.c\
		maps/utils/libft/ft_memcpy.c\
		maps/utils/libft/ft_memmove.c\
		maps/utils/libft/ft_strlcpy.c\
		maps/utils/libft/ft_strlcat.c\
		maps/utils/libft/ft_toupper.c\
		maps/utils/libft/ft_tolower.c\
		maps/utils/libft/ft_strchr.c\
		maps/utils/libft/ft_strrchr.c\
		maps/utils/libft/ft_strncmp.c\
		maps/utils/libft/ft_memchr.c\
		maps/utils/libft/ft_memcmp.c\
		maps/utils/libft/ft_strnstr.c\
		maps/utils/libft/ft_atoi.c\
		maps/utils/libft/ft_calloc.c\
		maps/utils/libft/ft_strdup.c\
		maps/utils/libft/ft_substr.c \
		maps/utils/libft/ft_strjoin.c \
		maps/utils/libft/ft_strtrim.c \
		maps/utils/libft/ft_split.c \
		maps/utils/libft/ft_itoa.c \
		maps/utils/libft/ft_strmapi.c \
		maps/utils/libft/ft_striteri.c \
		maps/utils/libft/ft_putchar_fd.c \
		maps/utils/libft/ft_putstr_fd.c \
		maps/utils/libft/ft_putendl_fd.c \
		maps/utils/libft/ft_putnbr_fd.c \
		maps/utils/libft/ft_putstr.c \
		maps/utils/gnl/gnl.c \
		maps/utils/gnl/gnl_utils.c \
		maps/utils/printf/ft_printf.c \
		maps/utils/printf/ft_putchar.c \
		maps/utils/printf/ft_puthexa.c \
		maps/utils/printf/ft_putnbr.c \
		maps/utils/printf/ft_putptr.c \
		maps/utils/printf/ft_putstr.c \
		maps/utils/printf/ft_putunsigned.c \
		maps/checks/read_map.c \
		maps/checks/composed_map.c \
		maps/checks/char_check.c \
		maps/checks/rectangular_map.c \
		maps/checks/closed_map.c \
		maps/checks/name_check.c \
		maps/checks/valid_path.c \
		maps/checks/all_check.c  \
		maps/game/show_map.c \
		maps/game/checks.c \
		maps/game/move_player.c \
		maps/game/changes.c \
		maps/game/count_moves.c \
		so_long.c \

SRCS2 = Bonus/maps/utils/libft/ft_isalpha.c\
		Bonus/maps/utils/libft/ft_isdigit.c\
		Bonus/maps/utils/libft/ft_isalnum.c\
		Bonus/maps/utils/libft/ft_isascii.c\
		Bonus/maps/utils/libft/ft_isprint.c\
		Bonus/maps/utils/libft/ft_strlen.c\
		Bonus/maps/utils/libft/ft_memset.c\
		Bonus/maps/utils/libft/ft_bzero.c\
		Bonus/maps/utils/libft/ft_memcpy.c\
		Bonus/maps/utils/libft/ft_memmove.c\
		Bonus/maps/utils/libft/ft_strlcpy.c\
		Bonus/maps/utils/libft/ft_strlcat.c\
		Bonus/maps/utils/libft/ft_toupper.c\
		Bonus/maps/utils/libft/ft_tolower.c\
		Bonus/maps/utils/libft/ft_strchr.c\
		Bonus/maps/utils/libft/ft_strrchr.c\
		Bonus/maps/utils/libft/ft_strncmp.c\
		Bonus/maps/utils/libft/ft_memchr.c\
		Bonus/maps/utils/libft/ft_memcmp.c\
		Bonus/maps/utils/libft/ft_strnstr.c\
		Bonus/maps/utils/libft/ft_atoi.c\
		Bonus/maps/utils/libft/ft_calloc.c\
		Bonus/maps/utils/libft/ft_strdup.c\
		Bonus/maps/utils/libft/ft_substr.c \
		Bonus/maps/utils/libft/ft_strjoin.c \
		Bonus/maps/utils/libft/ft_strtrim.c \
		Bonus/maps/utils/libft/ft_split.c \
		Bonus/maps/utils/libft/ft_itoa.c \
		Bonus/maps/utils/libft/ft_strmapi.c \
		Bonus/maps/utils/libft/ft_striteri.c \
		Bonus/maps/utils/libft/ft_putchar_fd.c \
		Bonus/maps/utils/libft/ft_putstr_fd.c \
		Bonus/maps/utils/libft/ft_putendl_fd.c \
		Bonus/maps/utils/libft/ft_putnbr_fd.c \
		Bonus/maps/utils/libft/ft_putstr.c \
		Bonus/maps/utils/gnl/gnl.c \
		Bonus/maps/utils/gnl/gnl_utils.c \
		Bonus/maps/utils/printf/ft_printf.c \
		Bonus/maps/utils/printf/ft_putchar.c \
		Bonus/maps/utils/printf/ft_puthexa.c \
		Bonus/maps/utils/printf/ft_putnbr.c \
		Bonus/maps/utils/printf/ft_putptr.c \
		Bonus/maps/utils/printf/ft_putstr.c \
		Bonus/maps/utils/printf/ft_putunsigned.c \
		Bonus/maps/checks/read_map.c \
		Bonus/maps/checks/composed_map.c \
		Bonus/maps/checks/char_check.c \
		Bonus/maps/checks/rectangular_map.c \
		Bonus/maps/checks/closed_map.c \
		Bonus/maps/checks/name_check.c \
		Bonus/maps/checks/valid_path.c \
		Bonus/maps/checks/all_check.c  \
		Bonus/maps/game/show_map.c \
		Bonus/maps/game/checks.c \
		Bonus/maps/game/move_player.c \
		Bonus/maps/game/changes.c \
		Bonus/maps/game/count_moves.c \
		Bonus/maps/game/move_enemy.c \
		Bonus/maps/game/enemy_changes.c \
		Bonus/so_long_bonus.c \


OBJ = ${SRCS:%.c=%.o}

OBJ2 = ${SRCS2:%.c=%.o}

all : ${NAME}

bonus : ${BONUS}

${NAME} : ${OBJ}
	@cc -I /usr/local/include ${SRCS} -lmlx -framework OpenGL -framework AppKit -o so_long

${BONUS} : ${OBJ2}
	@cc -I /usr/local/include  ${SRCS2} -lmlx -framework OpenGL -framework AppKit -o so_long_bonus

%.o: %.c
	@printf "\r Compiling ..."
	@cc $(FLAGS) -c $< -o $@

clean :
	@rm -f ${OBJ}
	@rm -f ${OBJ2}

fclean : clean
	@rm -f ${NAME}
	@rm -f ${BONUS}

re : fclean all

.PHONY : all clean fclean re