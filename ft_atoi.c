/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 21:36:04 by brtucker          #+#    #+#             */
/*   Updated: 2018/11/04 18:02:24 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long int		sign;
	long long int		prod;

	prod = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		sign = (*str++ == '-' ? -1 : 1);
	if (ft_strlenf((const char *)str, &ft_isdigit) >= 20)
		return (0);
	while (ft_isdigit((int)*str))
		prod = (prod * 10) + (long long int)(*str++ - '0');
	return (prod * sign);
}
