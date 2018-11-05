/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 15:38:42 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/02 12:45:55 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	char	*ptr1;
	char	*ptr2;
	char	*start;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	newstr = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!newstr)
		return (NULL);
	start = newstr;
	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	while (*ptr1)
		*newstr++ = *ptr1++;
	while (*ptr2)
		*newstr++ = *ptr2++;
	*newstr = '\0';
	return (start);
}
