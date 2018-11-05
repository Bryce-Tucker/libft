/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:25:02 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/11 18:35:34 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	wc;
	size_t	i;
	size_t	j;
	char	**split;

	if (s == NULL)
		return (NULL);
	wc = ft_wordcount(s, &c);
	if (!(split = (char **)malloc(sizeof(char *) * (wc + 1))))
		return (NULL);
	i = 0;
	j = -1;
	while (s[i] && ++j < wc)
	{
		while (s[i] == c)
			i++;
		split[j] = ft_strsub(s, i, ft_strlend((char *)&s[i], &c));
		while (s[i] != c)
			i++;
	}
	split[wc] = NULL;
	return (split);
}
