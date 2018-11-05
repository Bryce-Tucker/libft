/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:58:28 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/04 13:58:52 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstlen(t_list *lst)
{
	size_t len;
	t_list *ptr;

	len = 0;
	ptr = lst;
	while (ptr)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
