/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 18:18:35 by brtucker          #+#    #+#             */
/*   Updated: 2018/12/03 20:53:11 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*ret;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 0;
	len = ft_numlen(n) + 1;
	sign = (n < 0 ? 1 : 0);
	n = (n < 0 ? n *= -1 : n);
	if (!(ret = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	ret[--len] = '\0';
	while (len--)
	{
		ret[len] = n % 10 + '0';
		n = n / 10;
	}
	if (sign)
		ret[0] = '-';
	return (ret);
}
