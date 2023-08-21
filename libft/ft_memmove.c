/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:31:54 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/21 15:11:56 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned char	*newdest;
	unsigned char	*newsrc;

	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		newdest = (unsigned char *)dest;
		newsrc = (unsigned char *)src;
		while (n--)
			*newdest++ = *newsrc++;
	}
	else
	{
		newdest = (unsigned char *)dest + (n - 1);
		newsrc = (unsigned char *)src + (n - 1);
		while (n--)
			*newdest-- = *newsrc--;
	}
	return (dest);
}

/*int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
*/