/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_nillthree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:54:50 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/01/06 15:57:29 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void			ft_a_nillthree(t_stack **stack)
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
