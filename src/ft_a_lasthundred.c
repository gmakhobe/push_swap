#include "../includes/checker.h"

static void		ft_range(t_stack **stack_a, t_stack **stack_b, int min, int max)
{
	t_stack		*temp1;
	t_stack		*temp2;
	int			numb;

	temp1 = *stack_a;
	while (temp1 != NULL)
	{
		if ((temp1->num >= min) && (temp1->num <= max))
		{
			numb = temp1->num;
			temp2 = *stack_a;
			while (temp2->num != numb)
			{
				ft_a_rotate(stack_a, 1);
				temp2 = *stack_a;
			}
			ft_a_push(stack_a, stack_b, 2);
			temp1 = *stack_a;
		}
		else
			temp1 = temp1->next;
	}
}

static void		ft_chunks(t_stack **stack_a, t_stack **stack_b)
{
	int			lower;
	int			higher;
	int			half;

	lower = ft_a_detector(*stack_a, "rln");
	higher= ft_a_detector(*stack_a, "rhn");
	half = ((higher - lower) / 5);
	ft_range(stack_a, stack_b, lower, (lower + half));
	ft_range(stack_a, stack_b, (lower + half + 1), (lower + (half * 2)));
	ft_range(stack_a, stack_b, (lower + (half * 2) + 1), (lower + (half * 3)));
	ft_range(stack_a, stack_b, (lower + (half * 3) + 1), (lower + (half * 4)));
	ft_range(stack_a, stack_b, (lower + (half * 4) + 1), higher);
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