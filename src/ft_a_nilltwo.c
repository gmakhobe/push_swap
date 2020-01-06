/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_nilltwo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:58:46 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/01/06 15:59:23 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void		ft_a_nilltwo(t_stack *stack)
{
	if (stack->num > stack->next->num)
		ft_a_rotate(&stack, 1);
}
