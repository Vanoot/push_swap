/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:19:59 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/21 15:23:14 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	c;
	unsigned int	d;
	unsigned int	ret;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	if (size > c)
		ret = ft_strlen(src) + c;
	else
		ret = ft_strlen(src) + size;
	while (src[d] && c + 1 < size)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ret);
}

/*int main(void)
{
	char dest[] = "test";
	const char src [] = "olaa";

	printf("%u", ft_strlcat(dest, src, 1));
}
*/
