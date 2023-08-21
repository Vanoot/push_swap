/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:47:19 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/21 15:32:36 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp( const char *first, const char *second, unsigned int length )
{
	while (length && *first && *first == *second)
	{
		++first;
		++second;
		--length;
	}
	if (length == 0)
		return (0);
	return ((int)(unsigned char)*first - (int)(unsigned char)*second);
}
