#include "../includes/checker.h"

static void			ft_mylstdel(t_stack **stack)
{
	t_stack		*main;
	t_stack		*temp;

	main = (*stack);
	while (main != NULL)
	{
		temp = main->next;
		free(main);
		main = temp;
	}
	(*stack) = NULL;
}

static void		ft_pushswap(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stacklen(*stack_a) <= 5)
		ft_nilltofive(stack_a, stack_b);
	else if (ft_stacklen(*stack_a) <= 100)
		ft_a_lasthundred(stack_a, stack_b);
	else
		ft_a_lsthundred(stack_a, stack_b);
}

int				main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		ft_mynewlist(argc, argv, &stack_a);
		if (ft_hasdoubles(stack_a))
			ft_error();
		if (ft_issorted(stack_a))
			return (0);
		ft_pushswap(&stack_a, &stack_b);
	}
	ft_mylstdel(&stack_a);
	ft_mylstdel(&stack_b);
	return (0);
}