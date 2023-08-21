/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vanot <vanot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:44:05 by cvan-oot          #+#    #+#             */
/*   Updated: 2023/08/21 13:09:20 by vanot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hex_len(unsigned long x)
{
	int	len;

	len = 0;
	if (x == 0)
		return (1);
	while (x != 0)
	{
		len++;
		x = x / 16;
	}
	return (len);
}

void	ft_putnbr_base16(long nbr, char *base)
{
	if (nbr == 0)
	{
		print_int(base[0]);
		return ;
	}
	if (nbr != 0)
	{
		if (nbr / 16 != 0)
			ft_putnbr_base16(nbr / 16, base);
		print_int(base[nbr % 16]);
	}
}

int	print_hex(int x, char format)
{
	int		lenprint;
	char	*base;
	long	max;

	lenprint = 0;
	max = 4294967296;
	base = "0123456789abcdef";
	if (format == 'X')
		base = "0123456789ABCDEF";
	if (x < 0)
	{
		ft_putnbr_base16(max + x, base);
		lenprint = lenprint + hex_len(max + x);
	}
	else if (x >= 0)
	{
		ft_putnbr_base16(x, base);
		lenprint = lenprint + hex_len(x);
	}
	return (lenprint);
}

/*int	main(void)
{
	printf(" mY: %i\n", print_hex(-10, 'x'));
	printf("IT: %x\n", -10);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/