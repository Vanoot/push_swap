/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:16:43 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/24 13:39:56 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	to_int(char c, long nb)
{
	int	i;

	nb = nb * 10;
	i = c - 48;
	nb = nb + i;
	return (nb);
}

int	ft_atoi(const char *str)
{
	int					neg;
	int					i;
	long				num;
	unsigned long long	save;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg *= -1;
	}
	if (str[i] < 48 || str[i] > 57)
		return (0);
	while ((str[i] >= 48 && str[i] <= 57))
	{	
		num = to_int(str[i++], num);
		save = num;
		if (save > 9223372036854775807)
			return (-1 * (neg > 0));
	}
	return (num * neg);
}

/*int main(void)
{
	char *s = " ---+--+1234ab567";
	printf("%d", ft_atoi(s));
}
*/