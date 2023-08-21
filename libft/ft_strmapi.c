/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:48:19 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/21 15:23:31 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*newstr;
	int		len;

	i = 0;
	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	newstr = malloc(sizeof(char) * (len + 1));
	if (!newstr || !f)
		return (NULL);
	while (i < len)
	{
		newstr[i] = (*f)(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
