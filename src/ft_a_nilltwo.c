#include "../includes/checker.h"

void		ft_a_nilltwo(t_stack *stack)
{
	if (stack->num > stack->next->num)
        ft_a_rotate(&stack, 1);
}