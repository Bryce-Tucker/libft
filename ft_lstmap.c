/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:42:05 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/11 16:19:07 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*map;
	t_list		*start;
	t_list		*elem;

	if (!lst || !f)
		return (NULL);
	elem = f(lst);
	if (!(map = ft_lstnew(elem->content, elem->content_size)))
		return (NULL);
	lst = lst->next;
	start = map;
	while (lst)
	{
		elem = f(lst);
		if (!(map->next = ft_lstnew(elem->content, elem->content_size)))
			return (NULL);
		map = map->next;
		lst = lst->next;
	}
	return (start);
}
