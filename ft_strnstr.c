/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:02:39 by brtucker          #+#    #+#             */
/*   Updated: 2018/12/03 23:17:23 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (*s2 == '\0')
		return ((char *)s1);
	i = ft_strlen(s2);
	while (*s1 != '\0' && n >= i)
	{
		if (ft_strncmp(s1, s2, i) == 0)
			return ((char *)s1);
		s1++;
		n--;
	}
	return (NULL);
}
