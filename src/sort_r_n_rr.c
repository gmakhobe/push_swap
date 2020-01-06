/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_r_n_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 16:05:11 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/01/06 16:16:48 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void			ft_a_reverser(t_stack **stack, int print)
{
	t_stack		*temp1;
	t_stack		*temp2;

	temp1 = (*stack);
	temp2 = (*stack);
	if (ft_stacklen(*stack) == 0)
		return ;
	if ((*stack)->next != NULL)
	{
		while (temp2->next->next != NULL)
			temp2 = temp2->next;
		temp2->next->next = temp1;
		(*stack) = temp2->next;
		temp2->next = NULL;
	}
	if (print == 1)
		ft_putendl("rra");
	else if (print == 2)
		ft_putendl("rrb");
}

void			ft_a_reverserab(t_stack **stack_a, t_stack **stack_b, int val)
{
	ft_a_reverser(stack_a, 0);
	ft_a_reverser(stack_b, 0);
	if (val == 1)
		ft_putendl("rrr");
}

void			ft_a_rotate(t_stack **stack, int print)
{
	t_stack		*temp1;
	t_stack		*temp2;

	temp1 = (*stack);
	temp2 = (*stack);
	if (ft_stacklen(*stack) == 0)
		return ;
	if ((*stack)->next != NULL)
	{
		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp2->next = temp1;
		(*stack) = temp1->next;
		temp1->next = NULL;
	}
	if (print == 1)
		ft_putendl("ra");
	else if (print == 2)
		ft_putendl("rb");
}

void			ft_a_rotateab(t_stack **stack_a, t_stack **stack_b, int val)
{
	ft_a_rotate(stack_a, 0);
	ft_a_rotate(stack_b, 0);
	if (val == 1)
		ft_putendl("rr");
}
