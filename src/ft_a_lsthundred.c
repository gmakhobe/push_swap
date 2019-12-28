#include "../includes/checker.h"

static void		ft_chunks(t_stack **stack_a, t_stack **stack_b)
{
	int			lower;
	int			higher;
	int			val;

	lower = ft_a_detector(*stack_a, "rln");
	higher = ft_a_detector(*stack_a, "rhn");
	val = ((higher - lower) / 11);
	ft_a_range(stack_a, stack_b, lower, (lower + val));
	ft_a_range(stack_a, stack_b, (lower + val + 1), (lower + (val * 2)));
	ft_a_range(stack_a, stack_b, (lower + (val * 2) + 1), (lower + (val * 3)));
	ft_a_range(stack_a, stack_b, (lower + (val * 3) + 1), (lower + (val * 4)));
	ft_a_range(stack_a, stack_b, (lower + (val * 4) + 1), (lower + (val * 5)));
	ft_a_range(stack_a, stack_b, (lower + (val * 5) + 1), (lower + (val * 6)));
	ft_a_range(stack_a, stack_b, (lower + (val * 6) + 1), (lower + (val * 7)));
	ft_a_range(stack_a, stack_b, (lower + (val * 7) + 1), (lower + (val * 8)));
	ft_a_range(stack_a, stack_b, (lower + (val * 8) + 1), (lower + (val * 9)));
	ft_a_range(stack_a, stack_b, (lower + (val * 9) + 1), (lower + (val * 10)));
	ft_a_range(stack_a, stack_b, (lower + (val * 10) + 1), higher);
}

void			ft_a_lsthundred(t_stack **stack_a, t_stack **stack_b)
{
	int			higher;
	int			i;
	t_stack		*temp;

	ft_chunks(stack_a, stack_b);
	i = ft_stacklen(*stack_b);
	while (i != 0)
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
		i--;
	}
}
