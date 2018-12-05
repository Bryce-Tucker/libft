/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 20:14:26 by brtucker          #+#    #+#             */
/*   Updated: 2018/12/03 20:29:30 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*ret;
	size_t		len;
	size_t		start;

	start = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while ((s[len] == ' ' || s[len] == '\n' || s[len] == '\t') && len > 0)
		len--;
	if (s[start] == '\0')
		return (ft_strnew(0));
	ret = ft_strsub(s, start, len - start + 1);
	return (ret);
}
