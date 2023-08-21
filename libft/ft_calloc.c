/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:44:05 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/21 15:33:03 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int elementcount, unsigned int elementsize)
{
	void	*tmp;

	tmp = malloc(elementcount * elementsize);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, elementcount * elementsize);
	return (tmp);
}
