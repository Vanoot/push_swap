/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:21:22 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/21 15:21:08 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	c = (char)c;
	i = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
