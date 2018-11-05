/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:23:23 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/04 10:18:57 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(const char *str, char *delims)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (ft_instr(str[i], delims))
		i++;
	while (str[i])
	{
		if (ft_instr(str[i], delims) && !(ft_instr(str[i - 1], delims)))
			count++;
		i++;
	}
	if (!(ft_instr(str[i - 1], delims)))
		count++;
	return (count);
}
