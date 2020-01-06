/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_s_n_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 16:19:22 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/01/06 16:22:54 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void			ft_a_push(t_stack **from, t_stack **to, int print)
{
	t_stack		*temp1;
	t_stack		*temp2;

	temp1 = (*from);
	if (ft_stacklen(*from) == 0)
		return ;
	(*from) = temp1->next;
	temp1->next = NULL;
	if (*to == NULL)
		*to = temp1;
	else
	{
		temp2 = (*to);
		temp1->next = temp2;
		(*to) = temp1;
	}
	if (print == 1)
		ft_putendl("pa");
	else if (print == 2)
		ft_putendl("pb");
}

void			ft_a_swap(t_stack **stack, int print)
{
	int			temp;

	if (ft_stacklen((*stack)) == 0)
		return ;
	if ((*stack)->next != NULL)
	{
		temp = (*stack)->num;
		(*stack)->num = (*stack)->next->num;
		(*stack)->next->num = temp;
	}
	if (print == 1)
		ft_putendl("sa");
	else if (print == 2)
		ft_putendl("sb");
}

void			ft_a_swapab(t_stack **stack_a, t_stack **stack_b, int print)
{
	ft_a_swap(stack_a, 0);
	ft_a_swap(stack_b, 0);
	if (print == 1)
		ft_putendl("ss");
}
