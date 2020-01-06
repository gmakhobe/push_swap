/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 16:00:25 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/01/06 16:04:07 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

static void		ft_mylstadd(t_stack **stack, int num)
{
	t_stack		*new;
	t_stack		*temp;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->num = num;
	new->next = NULL;
	if (*stack == NULL)
		(*stack) = new;
	else
	{
		temp = (*stack);
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}

void			ft_mynewlist(int argc, char **argv, t_stack **stack)
{
	int			i;
	int			j;
	char		**list;

	i = 1;
	while (i < argc)
	{
		j = 0;
		list = ft_strsplit(argv[i], ' ');
		if (list[j] == NULL)
			ft_error();
		while (list[j] != NULL)
		{
			if (ft_isnbr(list[j]) != 1)
				ft_error();
			ft_mylstadd(stack, ft_atoi(list[j]));
			j++;
		}
		ft_fdpointer(list);
		i++;
	}
}
