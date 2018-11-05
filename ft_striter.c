/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 10:04:54 by brtucker          #+#    #+#             */
/*   Updated: 2018/11/04 18:09:54 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	char *ptr;
	int i;
	int len;

	if (!s)
		return ;
	ptr = s;
	i = 0;
	len = ft_strlen((const char *)s);

	while (i < len)
		(*f)(&s[i++]);
}
