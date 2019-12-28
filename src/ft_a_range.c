#include "../includes/checker.h"

void		ft_a_range(t_stack **stack_a, t_stack **stack_b, int lower, int higher)
{
	t_stack		*temp1;
	t_stack		*temp2;
	int			numb;

	temp1 = *stack_a;
	while (temp1 != NULL)
	{
		if ((temp1->num >= lower) && (temp1->num <= higher))
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