/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:52:19 by cvan-oot          #+#    #+#             */
/*   Updated: 2023/08/21 14:13:06 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap_any(t_stack *stack)
{
	int		tmp;

	tmp = stack->content;
	stack->first->next->content = stack->first->content;
	stack->first->content = tmp;
}

void	ft_sa(t_stack *stack)
{
	ft_swap_any(stack);
	ft_putstr_fd("sa\n", 1);
}

void	ft_sb(t_stack *stack)
{
	ft_swap_any(stack);
	ft_putstr_fd("sb\n", 1);
}

void	ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_swap_any(stack_a);
	ft_swap_any(stack_b);
	ft_putstr_fd("ss\n", 1);
}
