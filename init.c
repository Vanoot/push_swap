/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vanot <vanot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:15:27 by vanot             #+#    #+#             */
/*   Updated: 2023/05/12 14:52:58 by vanot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lstlast(t_stack *lst)
{
	while (lst)
	{
		if (lst->next == 0)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

void	lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*t;

	if (*lst)
	{
		t = lstlast(*lst);
		t->next = new;
		new->previous = t;
	}
	else
		*lst = new;
}

t_stack	*lstnew(int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->content = content;
	new->previous = NULL;
	return (new);
}

t_stack  *init(int argc, char *argv[])
{
    t_stack		*stack_a;
    long int	nb;
	int			i;

	stack_a = NULL;
	nb = 0;
	i = 1;
	while (i < argc)
	{
		nb = ft_atoi(argv[i]);
		if (nb < INT_MIN || nb > INT_MAX)
			write(2, "Error", 5);
		if (i == 1)
			stack_a = lstnew((int)nb);
		else
			lstadd_back(&stack_a, lstnew((int)nb));
		i++;
	}
	return (stack_a);
}

int	main(int argc, char *argv[])
{
	int i;
	t_stack *stack_a;

	i = 1;
	stack_a = init(argc, argv);
	while (i < argc)
	{
		ft_printf("%d\n", stack_a->content);
		stack_a = stack_a->next;
		i++;
	}
	
}