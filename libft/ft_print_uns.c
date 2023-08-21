/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:50:44 by cvan-oot          #+#    #+#             */
/*   Updated: 2023/01/31 14:55:00 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static unsigned int	getsize(long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb >= 1)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

void	print_unsigned_nbr(unsigned int nb)
{
	if (nb >= 10)
		print_unsigned_nbr(nb / 10);
	print_int(nb % 10 + 48);
}

int	print_unsigned(unsigned int nbr)
{
	int	lenprint;

	lenprint = 0;
	lenprint = getsize(nbr);
	print_unsigned_nbr(nbr);
	return (lenprint);
}
