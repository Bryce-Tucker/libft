/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 12:55:50 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/11 16:24:01 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL || content_size == 0)
	{
		new->content = NULL;
		content_size = 0;
	}
	else
	{
		if (!(new->content = (void *)ft_strdup((const char *)content)))
			return (NULL);
	}
	new->content_size = content_size;
	new->next = NULL;
	return (new);
}
