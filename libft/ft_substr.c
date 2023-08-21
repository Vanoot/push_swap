/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:13:41 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/21 15:26:37 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rest;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	rest = malloc(sizeof(char) * len + 1);
	if (!rest)
		return (NULL);
	while (len)
	{
		rest[i++] = s[start++];
		len--;
	}
	rest[i] = '\0';
	return (rest);
}

// int main(void)
// {
// 	printf("%s", ft_substr("Pouetpouet", 3, 3));
// }
