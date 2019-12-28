#include "../includes/checker.h"

static void		ft_chunks(t_stack **stack_a, t_stack **stack_b)
{
	int			lower;
	int			higher;
	int			half;

	lower = ft_a_detector(*stack_a, "rln");
	higher= ft_a_detector(*stack_a, "rhn");
	half = ((higher - lower) / 5);
	ft_a_range(stack_a, stack_b, lower, (lower + half));
	ft_a_range(stack_a, stack_b, (lower + half + 1), (lower + (half * 2)));
	ft_a_range(stack_a, stack_b, (lower + (half * 2) + 1), (lower + (half * 3)));
	ft_a_range(stack_a, stack_b, (lower + (half * 3) + 1), (lower + (half * 4)));
	ft_a_range(stack_a, stack_b, (lower + (half * 4) + 1), higher);
}

void			ft_a_lasthundred(t_stack **stack_a, t_stack **stack_b)
{
	int			higher;
	int			stacklen;
	t_stack		*temp;

	ft_chunks(stack_a, stack_b);
	stacklen = ft_stacklen(*stack_b);
	while (stacklen != 0)
	{
		temp = (*stack_b);
		higher = ft_a_detector(*stack_b, "rhn");
		while (temp->num != higher)
		{
			if (ft_a_detector(*stack_b, "rhl") <= (ft_stacklen(*stack_b) / 2))
				ft_a_rotate(stack_b, 2);
			else
				ft_a_reverser(stack_b, 2);
			temp = (*stack_b);
		}
		ft_a_push(stack_b, stack_a, 1);
		stacklen--;
	}
}