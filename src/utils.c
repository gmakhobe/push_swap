#include "../includes/checker.h"

int			ft_issorted(t_stack *stack)
{
	t_stack		*temp;

	temp = stack;
	while (temp->next != NULL)
	{
		if (temp->num > temp->next->num)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int         ft_hasdoubles(t_stack *stack)
{
	t_stack		*temp1;
	t_stack		*temp2;

	temp1 = stack;
	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		while (temp2 != NULL)
		{
			if (temp1->num == temp2->num)
				return (1);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	return (0);
}

int			ft_stacklen(t_stack *stack)
{
	int		i;

	i = 0;
	while (stack != NULL)
	{
		stack = stack->next;
        i++;
	}
	return (i);
}

void        ft_fdpointer(char **ptr)
{
	int			i;

	i = 0;
	while (ptr[i] != NULL)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	ptr = NULL;
}

void        ft_error(void)
{
	ft_putendl_fd("Error", 2);
	exit(0);
}
