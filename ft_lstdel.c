/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:50:35 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/11 16:24:24 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;
	t_list	*buff;

	ptr = *alst;
	while (ptr)
	{
		buff = ptr->next;
		del(ptr->content, ptr->content_size);
		free(ptr);
		ptr = buff;
	}
	*alst = NULL;
}
