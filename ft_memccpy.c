/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:53:13 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/11 18:28:13 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	while (len)
	{
		*((char*)dst) = *((char*)src);
		dst = (void*)((char*)dst + 1);
		src = (void*)((char*)src + 1);
		if ((char)(c) == *((char*)dst - 1))
		{
			return (dst);
		}
		len--;
	}
	return (NULL);
}
