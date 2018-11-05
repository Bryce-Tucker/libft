/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:50:42 by brtucker          #+#    #+#             */
/*   Updated: 2018/09/24 18:39:04 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	if (size <= 0)
		return (NULL);
	mem = malloc(size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
