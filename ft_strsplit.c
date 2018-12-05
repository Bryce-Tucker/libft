/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:25:02 by brtucker          #+#    #+#             */
/*   Updated: 2018/12/03 20:28:41 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		wc;
	char	**ret;

	i = 0;
	wc = ft_wordcount((const char *)s, c);
	ret = (char **)malloc(sizeof(*ret) * (wc + 1));
	if (ret == NULL)
		return (NULL);
	while (wc--)
	{
		while (*s == c && *s)
			s++;
		ret[i] = ft_strsub((const char *)s, 0, ft_strlenuc((const char *)s, c));
		s = s + ft_strlenuc((const char*)s, c);
		i++;
	}
	ret[i] = NULL;
	return (ret);
}
