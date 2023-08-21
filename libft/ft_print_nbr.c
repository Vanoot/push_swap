/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vanot <vanot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:34:55 by cvan-oot          #+#    #+#             */
/*   Updated: 2023/08/21 13:10:07 by vanot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getsize(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	if (nb == 0)
		return (1);
	while (nb >= 1)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

void	printnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		print_int('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 10)
		printnbr(nbr / 10);
	print_int(nbr % 10 + 48);
}

int	print_nbr(int nbr)
{
	int	printf_len;

	printf_len = getsize(nbr);
	printnbr(nbr);
	return (printf_len);
}
