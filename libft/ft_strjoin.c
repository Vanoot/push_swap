/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:38:25 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/21 15:32:06 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*conc;
	int		i;
	int		y;

	i = 0;
	conc = malloc(sizeof(char) *(ft_strlen((char *)s1)
				+ ft_strlen((char *)s2) + 1));
	if (!conc)
		return (NULL);
	while (s1[i])
	{
		conc[i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y])
	{
		conc[i] = s2[y];
		i++;
		y++;
	}
	conc[i] = '\0';
	return (conc);
}

// int main()
// {
// 	printf("%s", ft_strjoin("la", "bite"));
// 	return (0);
// }
