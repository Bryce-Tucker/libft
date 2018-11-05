/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 20:51:10 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/11 18:33:16 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (len <= 0)
		return (NULL);
	if (!(sub = (char *)malloc(sizeof(*s) * (len + 1))))
		return (NULL);
	i = -1;
	while (++i < len)
		sub[i] = s[start++];
	sub[i] = '\0';
	return (sub);
}
