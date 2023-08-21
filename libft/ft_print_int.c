/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vanot <vanot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:55:46 by cvan-oot          #+#    #+#             */
/*   Updated: 2023/08/21 13:09:33 by vanot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_int(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_string(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		i += print_string("(null)");
	}
	else
	{
		while (s[i])
			i += print_int(s[i]);
	}
	return (i);
}
