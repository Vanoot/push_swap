/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:01:37 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/21 15:08:25 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*minmax(int n)
{
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == INT_MAX)
		return (ft_strdup("2147483647"));
	return (ft_strdup("0"));
}

static	int	countdigit(int i)
{
	int	count;

	if (i == 0)
		return (1);
	count = 0;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;

	nb = n;
	i = countdigit(nb);
	if (n == INT_MIN || n == INT_MAX || n == 0)
		return (minmax(n));
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = 0;
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}
