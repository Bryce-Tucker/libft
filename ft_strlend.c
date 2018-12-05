/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlend.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 09:42:05 by brtucker          #+#    #+#             */
/*   Updated: 2018/11/07 14:00:09 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlend(const char *str, char *delims)
{
	size_t i;

	i = 0;
	while (str[i] && (!(ft_instr(str[i], delims))))
		i++;
	return (i);
}
