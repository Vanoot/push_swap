/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vanot <vanot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:09:36 by vanot             #+#    #+#             */
/*   Updated: 2023/08/21 13:10:19 by vanot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"

typedef struct s_stack
{
	int	    content;
	struct  s_stack	*next;
    struct  s_stack *previous;
}	t_stack;

#endif