/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 20:14:26 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/11 18:34:57 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		b;
	int		e;
	char	*str;

	b = 0;
	if (s == NULL || !(ft_strlen(s)))
		return (s == NULL ? NULL : "");
	while (s[b] == ' ' || s[b] == '\t' || s[b] == '\n')
		b++;
	i = b - 1;
	if (!s[b])
		return ("");
	while (s[++i])
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			e = i;
	}
	if (!(str = (char *)malloc(sizeof(*s) * ((b == e ? 2 : e - b + 2)))))
		return (NULL);
	i = 0;
	while (b <= e)
		str[i++] = s[b++];
	str[i] = '\0';
	return (str);
}
