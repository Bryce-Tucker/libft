/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:16:08 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/04 15:22:29 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	end;
	size_t	i;

	end = ft_strlen(s1);
	i = 0;
	while (s2[i] && i < n)
	{
		s1[end] = s2[i];
		end++;
		i++;
	}
	if (s1[end])
		s1[end] = '\0';
	return (s1);
}
