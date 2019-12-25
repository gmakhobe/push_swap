#ifndef CHECKER_H
# define CHECKER_H
# include "../libft/libft.h"
typedef struct			s_stack
{
	int					num;
	struct s_stack		*next;
}						t_stack;
void                    ft_mynewlist(int argc, char **argv, t_stack **stack);
void                    ft_error(void);
void                    ft_fdpointer(char **ptr);
int                     ft_stacklen(t_stack *stack);
int                     ft_hasdoubles(t_stack *stack);
int						ft_issorted(t_stack *stack);
# include "sort.h"
# include "auto_sort.h"
#endif