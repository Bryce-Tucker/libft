/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 09:38:26 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/04 09:38:51 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_instr(int c, char *str)
{
	size_t i;

	i = 0;
	while (str[i] != (unsigned char)c && str[i])
		i++;
	return (str[i] == (unsigned char)c ? 1 : 0);
}
