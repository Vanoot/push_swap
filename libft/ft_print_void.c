/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_void.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vanot <vanot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:31:32 by cvan-oot          #+#    #+#             */
/*   Updated: 2023/08/21 13:09:45 by vanot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putnbr(unsigned long long nbr, char *base)
{
	if (nbr == 0)
	{
		print_int(base[0]);
		return ;
	}
	if (nbr != 0)
	{
		if (nbr / 16 != 0)
			putnbr(nbr / 16, base);
		print_int(base[nbr % 16]);
	}
}

int	print_void(unsigned long long ptr)
{
	int	lenprint;

	lenprint = 0;
	lenprint += print_int('0');
	lenprint += print_int('x');
	putnbr(ptr, "0123456789abcdef");
	lenprint += hex_len(ptr);
	return (lenprint);
}
