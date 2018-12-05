/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:45:30 by brtucker          #+#    #+#             */
/*   Updated: 2018/11/07 15:49:41 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrimd(char const *s, char const *delims)
{
	int		i;
	int		len;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	while (ft_instr(s[i], (char *)delims) && s[i])
		i++;
	if (!s[i])
		return ("");
	while (ft_instr(s[--len], (char *)delims))
		;
	len += 2;
	if (!(str = (char *)malloc(sizeof(char) * (len - i))))
		return (NULL);
	str[--len - i] = '\0';
	while (--len - i >= 0)
		str[len - i] = s[len];
	return (str);
}
