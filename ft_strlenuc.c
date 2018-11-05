/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenuc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 11:05:29 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/04 11:08:15 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlenuc(unsigned char *str, unsigned char c)
{
	size_t i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}
