/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:12:16 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/01/06 16:18:44 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

void			ft_a_swap(t_stack **stack, int print);
void			ft_a_swapab(t_stack **stack_a, t_stack **stack_b, int print);
void			ft_a_push(t_stack **from, t_stack **to, int print);
void			ft_a_rotate(t_stack **stack, int print);
void			ft_a_rotateab(t_stack **stack_a, t_stack **stack_b, int val);
void			ft_a_reverser(t_stack **stack, int print);
void			ft_a_reverserab(t_stack **stack_a, t_stack **stack_b, int val);
#endif
