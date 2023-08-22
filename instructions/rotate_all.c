/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_all.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:13:14 by cvan-oot          #+#    #+#             */
/*   Updated: 2023/08/22 14:50:44 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack	*stack)
{
	t_node	*next;
	int		*old_first;

	old_first = malloc(sizeof(int));
	if (old_first == NULL)
		return (NULL);
	*tmp = *((int *) stack->a->first->content);
	next = stack->a->first->next;
	ft_lstadd_back(stack->a, tmp);
	list_remove(stack->a, stack->a->first, free);
	stack->a->first = next;
	ft_putstr_fd("ra\n", 1);
}

void	ft_rb(t_stack	*stack)
{
	t_node	*next;
	int		*old_first;

	old_first = malloc(sizeof(int));
	if(old_first == NULL)
		return (NULL);
	*tmp = *((int *) stack->b->first->content);
	next = stack->b->first->next;
	ft_lstadd_back(stack->b, tmp);
	list_remove(stack->b, stack->a->first, free);
	stack->b->first = next;
	ft_putstr_fd("ra\n", 1);
}
