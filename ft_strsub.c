/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 20:51:10 by brtucker          #+#    #+#             */
/*   Updated: 2018/12/03 23:09:48 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(sub = (char *)malloc(sizeof(*s) * (len + 1))))
		return (NULL);
	i = -1;
	while (++i < len)
		sub[i] = s[start++];
	sub[i] = '\0';
	return (sub);
}
