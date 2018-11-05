/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:50:37 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/01 10:50:24 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;

	i = 0;
	if (!(*needle))
		return (((char *)haystack));
	while (*haystack)
	{
		while (haystack[i] == needle[i] && needle[i])
			i++;
		if (!(needle[i]))
			return (((char *)haystack));
		i = 0;
		haystack++;
	}
	return (NULL);
}
