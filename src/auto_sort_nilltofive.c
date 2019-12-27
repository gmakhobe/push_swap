#include "../includes/checker.h"

void			ft_nilltofive(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stacklen(*stack_a) == 2)
		ft_a_nilltwo(*stack_a);
	else if (ft_stacklen(*stack_a) == 3)
		ft_a_nillthree(stack_a);
	else if (ft_stacklen(*stack_a) == 4)
		ft_a_nillfour(stack_a, stack_b);
	else if (ft_stacklen(*stack_a) == 5)
		ft_a_nillfive(stack_a, stack_b);
}