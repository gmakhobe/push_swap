#include "../includes/checker.h"

/*
	find_small_big

*/

static void		ft_a_nillfour(t_stack **stack_a, t_stack **stack_b)
{
	int			min;
	t_stack		*temp;

	min = find_small_big(*stack_a, "sn");
	temp = (*stack_a);
	while (temp->num != min)
	{
		if (find_small_big(*stack_a, "snp") <= 2)
			do_ra(stack_a, 1);
		else
			do_rra(stack_a, 1);
		temp = (*stack_a);
	}
	if (is_sorted(*stack_a))
		return ;
	do_pb(stack_a, stack_b, 1);
	sort_three(stack_a);
	do_pa(stack_a, stack_b, 1);
}

static void		ft_a_nillthree(t_stack **stack)
{
	if (((*stack)->num > (*stack)->next->num) &&
		((*stack)->num < (*stack)->next->next->num))
		ft_a_swap(stack, 1);
	else if (((*stack)->num > (*stack)->next->num) &&
			((*stack)->next->num < (*stack)->next->next->num))
		ft_a_rotate(stack, 1);
	else if (((*stack)->num < (*stack)->next->num) &&
			((*stack)->num > (*stack)->next->next->num))
		ft_a_reverser(stack, 1);
	else if (((*stack)->num > (*stack)->next->num) &&
			((*stack)->next->num > (*stack)->next->next->num))
	{
		ft_a_swap(stack, 1);
		ft_a_reverser(stack, 1);
	}
	else if (((*stack)->num < (*stack)->next->num) &&
			((*stack)->next->num > (*stack)->next->next->num))
	{
		ft_a_swap(stack, 1);
		ft_a_rotate(stack, 1);
	}
}

static void		ft_a_nilltwo(t_stack *stack)
{
	if (stack->num > stack->next->num)
        ft_a_rotate(&stack, 1);
}

void			ft_nilltofive(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stacklen(*stack_a) == 2)
		ft_a_nilltwo(*stack_a);
	else if (ft_stacklen(*stack_a) == 3)
		ft_a_nillthree(stack_a);
	else if (ft_stacklen(*stack_a) == 4)
		ft_a_nillfour(stack_a, stack_b);
	/*else if (stack_len(*stack_a) == 5)
		sort_five(stack_a, stack_b);*/
}