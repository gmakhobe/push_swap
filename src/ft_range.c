/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:17:53 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/01/06 16:36:58 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void			ft_range(t_stack **stack_a, t_stack **stack_b, int lr, int hr)
{
	t_stack		*temp1;
	t_stack		*temp2;
	int			numb;

	temp1 = *stack_a;
	while (temp1 != NULL)
	{
		if ((temp1->num >= lr) && (temp1->num <= hr))
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
