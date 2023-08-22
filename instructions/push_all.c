/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:13:15 by cvan-oot          #+#    #+#             */
/*   Updated: 2023/08/22 14:11:24 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	list_remove(t_list *list, t_node *node, void (*del)(void*))
{
	if (node != NULL)
	{
		del(node->content);
		free(node);
		list->size--;
	}
}

void	ft_pa(t_stack *stack)
{
	int	*tmp;

	tmp = malloc(sizeof(int));
	if (tmp == NULL)
		return (NULL);
	*tmp = *(int *)(stack->b->first->content);
	ft_lstadd_front(stack->a, tmp);
	list_remove(stack->a, stack->b->first, free);
	ft_putstr_fd("pa\n", 1);
}

void	ft_pb(t_stack *stack)
{
	int	*tmp;

	tmp = malloc(sizeof(int));
	if (tmp == NULL)
		return (NULL);
	*tmp = *(int *)(stack->a->first->content);
	ft_lstadd_front(stack->b, tmp);
	list_remove(stack->b, stack->a->first, free);
	ft_putstr_fd("pb\n", 1);
}
