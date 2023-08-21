/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:38:21 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/21 16:17:52 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	free_all(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

static	int	nbrwords(char const *s, char c)
{
	int	tmp;
	int	count;

	tmp = 0;
	count = 0;
	while (*s)
	{
		if (tmp == 0 && *s != c)
		{
			tmp = 1;
			count++;
		}
		else if (*s == c)
			tmp = 0;
	s++;
	}
	return (count);
}

static	char	*write_str(const char *s, int start, int end)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

static	char	**splitloop(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	y;
	int		index;

	index = -1;
	i = 0;
	y = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			tab[y++] = write_str(s, index, i);
			if (!tab[y - 1])
			{
				free_all(tab);
				return (NULL);
			}
			index = -1;
		}
		i++;
	}
	tab[y] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc((nbrwords(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	return (splitloop(s, c, tab));
}
