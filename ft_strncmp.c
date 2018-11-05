/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:49:39 by brtucker          #+#    #+#             */
/*   Updated: 2018/11/04 13:55:09 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n <= 0)
		return (0);
	while (*s1 == *s2 && *s1 && *s2 && --n)
	{
		s1++;
		s2++;
	}
	return (((unsigned char)*s1) - (unsigned char)*s2);
}
