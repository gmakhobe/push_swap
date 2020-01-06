/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_detector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:25:50 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/01/06 15:33:22 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

static int		ft_bnumloc(t_stack *stack, char *inst)
{
	int			numb;
	int			locate;
	int			count;
	t_stack		*temp;

	numb = stack->num;
	temp = stack->next;
	locate = 1;
	count = 2;
	while (temp != NULL)
	{
		if (temp->num > numb)
		{
			numb = temp->num;
			locate = count;
		}
		temp = temp->next;
		count++;
	}
	if (!ft_strcmp(inst, "rhn"))
		return (numb);
	else if (!ft_strcmp(inst, "rhl"))
		return (locate);
	return (0);
}

static int		ft_snumloc(t_stack *stack, char *inst)
{
	int			numb;
	int			locate;
	int			count;
	t_stack		*temp;

	numb = stack->num;
	temp = stack->next;
	locate = 1;
	count = 2;
	while (temp != NULL)
	{
		if (temp->num < numb)
		{
			numb = temp->num;
			locate = count;
		}
		temp = temp->next;
		count++;
	}
	if (!ft_strcmp(inst, "rln"))
		return (numb);
	else if (!ft_strcmp(inst, "rll"))
		return (locate);
	return (0);
}

int				ft_a_detector(t_stack *stack, char *inst)
{
	if (!ft_strcmp(inst, "rln"))
		return (ft_snumloc(stack, inst));
	else if (!ft_strcmp(inst, "rll"))
		return (ft_snumloc(stack, inst));
	else if (!ft_strcmp(inst, "rhn"))
		return (ft_bnumloc(stack, inst));
	else if (!ft_strcmp(inst, "rhl"))
		return (ft_bnumloc(stack, inst));
	return (0);
}
