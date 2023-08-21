/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:20:09 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/21 15:11:14 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar,
	unsigned int size)
{
	char	*tmp;

	searchedChar = (char)searchedChar;
	tmp = (char *)memoryBlock;
	while (size)
	{
		if (*tmp == searchedChar)
			return ((void *)tmp);
		tmp++;
		size--;
	}
	return (NULL);
}
