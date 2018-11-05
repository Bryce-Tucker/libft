/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:30:17 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/01 11:14:26 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *start;

	start = dst;
	if (len <= 0)
		return (dst);
	while (len--)
		*dst++ = (*src ? *src++ : '\0');
	return (start);
}
