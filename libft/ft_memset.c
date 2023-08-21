/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:16:44 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/21 15:12:01 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, unsigned int count)
{
	unsigned char	*newdest;
	unsigned int	i;

	newdest = dest;
	i = 0;
	while (i < count)
		newdest[i++] = value;
	return (newdest);
}
