/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auto_sort.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 13:15:05 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/01/06 14:58:10 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUTO_SORT_H
# define AUTO_SORT_H

void			ft_nilltofive(t_stack **stack_a, t_stack **stack_b);
void			ft_a_nilltwo(t_stack *stack);
void			ft_a_nillthree(t_stack **stack);
void			ft_a_nillfour(t_stack **stack_a, t_stack **stack_b);
int				ft_a_detector(t_stack *stack, char *inst);
void			ft_a_nillfive(t_stack **stack_a, t_stack **stack_b);
void			ft_range(t_stack **stack_a, t_stack **stack_b, int lr, int hr);
void			ft_a_lasthundred(t_stack **stack_a, t_stack **stack_b);
void			ft_a_lsthundred(t_stack **stack_a, t_stack **stack_b);
#endif
