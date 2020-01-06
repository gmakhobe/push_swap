/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:59:01 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/01/06 15:11:05 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../libft/libft.h"
# include "sort.h"
# include "auto_sort.h"

void					ft_mynewlist(int argc, char **argv, t_stack **stack);
void					ft_error(void);
void					ft_fdpointer(char **ptr);
int						ft_stacklen(t_stack *stack);
int						ft_hasdoubles(t_stack *stack);
int						ft_issorted(t_stack *stack);
#endif
