/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:40:30 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/21 15:24:43 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	i;
	int				y;
	int				sizelittle;
	char			*rbig;

	i = 0;
	rbig = (char *)big;
	sizelittle = ft_strlen((char *)little);
	if (sizelittle == 0 || big == little)
		return (rbig);
	while (big[i] && i < len)
	{
		y = 0;
		while (rbig[i + y] && little[y]
			&& (i + y) < len && rbig[i + y] == little[y])
			y++;
		if (y == sizelittle)
			return (rbig + i);
		i++;
	}
	return (0);
}
