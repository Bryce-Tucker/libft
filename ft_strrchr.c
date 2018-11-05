/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:47:10 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/11 11:19:46 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int last_sighting;

	i = -1;
	last_sighting = -1;
	while (s[++i])
	{
		if ((char)s[i] == (char)c)
			last_sighting = i;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (last_sighting >= 0 ? (char *)&s[last_sighting] : NULL);
}
