/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 10:04:40 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/01 11:04:11 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*map;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	map = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!map)
		return (NULL);
	i = 0;
	while (s[i])
	{
		map[i] = f(s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
