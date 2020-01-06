/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 11:31:07 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/01/06 16:35:24 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

static void		ft_mylstdel(t_stack **stack)
{
	t_stack		*main;
	t_stack		*temp;

	main = (*stack);
	while (main != NULL)
	{
		temp = main->next;
		free(main);
		main = temp;
	}
	(*stack) = NULL;
}

static void		ft_checker(char *str, t_stack **stack_a, t_stack **stack_b)
{
	if (!ft_strcmp("sa", str))
		ft_a_swap(stack_a, 0);
	else if (!ft_strcmp("sb", str))
		ft_a_swap(stack_b, 0);
	else if (!ft_strcmp("ss", str))
		ft_a_swapab(stack_a, stack_b, 0);
	else if (!ft_strcmp("pb", str))
		ft_a_push(stack_a, stack_b, 0);
	else if (!ft_strcmp("pa", str))
		ft_a_push(stack_b, stack_a, 0);
	else if (!ft_strcmp("ra", str))
		ft_a_rotate(stack_a, 0);
	else if (!ft_strcmp("rb", str))
		ft_a_rotate(stack_b, 0);
	else if (!ft_strcmp("rr", str))
		ft_a_rotateab(stack_a, stack_b, 0);
	else if (!ft_strcmp("rra", str))
		ft_a_reverser(stack_a, 0);
	else if (!ft_strcmp("rrb", str))
		ft_a_reverser(stack_b, 0);
	else if (!ft_strcmp("rrr", str))
		ft_a_reverserab(stack_a, stack_b, 0);
	else
		ft_error();
}

static void		ft_readinput(t_stack **stack_a, t_stack **stack_b)
{
	char		*input;

	while (get_next_line(0, &input))
	{
		ft_checker(input, stack_a, stack_b);
		free(input);
		input = NULL;
	}
}

static int		ft_check(t_stack *stack, int stacklen)
{
	if (ft_issorted(stack) && ft_stacklen(stack) == stacklen)
		return (1);
	else
		return (0);
}

int				main(int argc, char **argv)
{
	int			stacklen;
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		ft_mynewlist(argc, argv, &stack_a);
		stacklen = ft_stacklen(stack_a);
		if (ft_hasdoubles(stack_a))
			ft_error();
		ft_readinput(&stack_a, &stack_b);
		if (ft_check(stack_a, stacklen))
			ft_putendl("OK");
		else
			ft_putendl("KO");
	}
	ft_mylstdel(&stack_a);
	ft_mylstdel(&stack_b);
	return (0);
}
