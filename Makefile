CFLAGS			= -Wall -Werror -Wextra
CHECKER			= checker
PUSHSWAP		= push_swap

SRC				= src/list.c \
				  src/utils.c \
				  src/sort_s_n_p.c \
				  src/sort_r_n_rr.c

SRC_PS			= src/auto_sort_nilltofive.c \
				  src/ft_a_nilltwo.c \
				  src/ft_a_nillthree.c \
				  src/ft_a_nillfour.c \
				  src/ft_a_detector.c \
				  src/ft_a_nillfive.c \
				  src/ft_a_range.c \
				  src/ft_a_lasthundred.c \
				  src/ft_a_lsthundred.c


CHECKER_DIR		= checker_dir/checker.c
PUSHSWAP_DIR	= push_swap_dir/push_swap.c

all: $(CHECKER) $(PUSHSWAP)

$(CHECKER):
	make re -C libft/
	gcc $(FLAGS) $(SRC) $(CHECKER_DIR) libft/libft.a -o $(CHECKER)
$(PUSHSWAP):
	make re -C libft/
	gcc $(FLAGS) $(SRC) $(SRC_PS) $(PUSHSWAP_DIR) libft/libft.a -o $(PUSHSWAP)

clean:
	make clean -C libft/

fclean:
	make fclean -C libft/
	rm -f $(CHECKER) $(PUSHSWAP)

re: fclean all
