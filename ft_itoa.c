/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 18:18:35 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/01 10:42:29 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		multi;
	int		mod;

	str = (char *)malloc(sizeof(char) * (ft_numlen(n) + 1));
	if (!str)
		return (NULL);
	mod = (n < 0 ? -10 : 10);
	multi = (n < 0 ? -10 : 10);
	while (n % multi != n)
		multi *= 10;
	while (multi != 1 || multi != -1)
	{
		*str++ = ((n / (multi / 10)) % mod) + '0';
		multi /= 10;
	}
	*str = '\0';
	return (str);
}
