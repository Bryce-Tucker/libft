/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:23:23 by brtucker          #+#    #+#             */
/*   Updated: 2018/12/03 20:11:58 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(const char *str, char c)
{
	int triggered;
	int wc;

	triggered = 0;
	wc = 0;
	if (!str || !c)
		return (0);
	while (*str)
	{
		if (*str != c && triggered == 0)
		{
			triggered = 1;
			wc++;
		}
		else if (*str == c && triggered == 1)
			triggered = 0;
		str++;
	}
	return (wc);
}
