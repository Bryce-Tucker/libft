/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_towhole.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:03:24 by brtucker          #+#    #+#             */
/*   Updated: 2018/09/19 15:29:21 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlcude "libft.h"

double	ft_towhole(double fpointnum, int *multi)
{
	double	whole;
	int		sign;

	whole = fpointnum;
	sign = 0;
	if (fpointnum < 0)
	{
		sign++;
		whole *= -1;
	}
	*multi = 0;
	while (whole != ft_floor(whole))
	{
		*multi += 1;
		whole *= 10;
		if (whole < 0)
		{
			*multi = 0;
			return (0);
		}
	}
	return (whole * (sign == 1 ? -1 : 1));
}
