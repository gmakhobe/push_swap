#include "../includes/checker.h"

void		ft_a_nillfive(t_stack **stack_a, t_stack **stack_b)
{
	int			lower;
	t_stack		*temp;

	lower = ft_a_detector(*stack_a, "rln");
	temp = (*stack_a);
	while (temp->num != lower)
	{
		if (ft_a_detector(*stack_a, "rll") <= 2)
			ft_a_rotate(stack_a, 1);
		else
			ft_a_reverser(stack_a, 1);
		temp = (*stack_a);
	}
	if ((ft_issorted(*stack_a)) && (ft_stacklen(*stack_b) == 0))
		return ;
	ft_a_push(stack_a, stack_b, 2);
	ft_a_nillfour(stack_a, stack_b);
	ft_a_push(stack_b, stack_a, 1);
}