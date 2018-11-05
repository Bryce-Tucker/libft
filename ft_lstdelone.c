/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:28:11 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/11 15:05:10 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;

	ptr = *alst;
	del(ptr->content, ptr->content_size);
	ptr->content_size = 0;
	free(*alst);
	*alst = NULL;
}
